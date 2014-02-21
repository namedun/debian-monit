/*
 * Copyright (C) Tildeslash Ltd. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders give
 * permission to link the code of portions of this program with the
 * OpenSSL library under certain conditions as described in each
 * individual source file, and distribute linked combinations
 * including the two.
 *
 * You must obey the GNU Affero General Public License in all respects
 * for all of the code used other than OpenSSL.
 */

/**
 *  System dependent filesystem methods.
 *
 *  @file
 */

#include "config.h"

#ifdef HAVE_STDIO_H
#include <stdio.h>
#endif

#ifdef HAVE_ERRNO_H
#include <errno.h>
#endif

#ifdef HAVE_STRINGS_H
# include <strings.h>
#endif

#ifdef HAVE_SYS_TYPES_H
# include <sys/types.h>
#endif

#ifdef HAVE_SYS_STATVFS_H
# include <sys/statvfs.h>
#endif

#ifdef HAVE_SYS_MNTTAB_H
# include <sys/mnttab.h>
#endif

#include "monit.h"
#include "device_sysdep.h"


/**
 * Solaris special block device mountpoint method. Filesystem must be mounted.
 * In the case of success, mountpoint is stored in filesystem information
 * structure for later use.
 *
 * @param inf  Information structure where resulting data will be stored
 * @param blockdev Identifies block special device
 * @return         NULL in the case of failure otherwise mountpoint
 */
char *device_mountpoint_sysdep(Info_T inf, char *blockdev) {
  struct mnttab mnt;
  FILE         *mntfd;

  ASSERT(inf);
  ASSERT(blockdev);

  if ((mntfd = fopen("/etc/mnttab", "r")) == NULL) {
    LogError("%s: Cannot open /etc/mnttab file\n", prog);
    return NULL;
  }
  while (getmntent(mntfd, &mnt) == 0) {
    char real_mnt_special[PATH_MAX+1];
    if (realpath(mnt.mnt_special, real_mnt_special) && IS(real_mnt_special, blockdev)) {
        fclose(mntfd);
        inf->priv.filesystem.mntpath = Str_dup(mnt.mnt_mountp);
        return inf->priv.filesystem.mntpath;
    }
  }
  fclose(mntfd);
  return NULL;
}


/**
 * Solaris filesystem usage statistics. In the case of success result is stored in
 * given information structure.
 *
 * @param inf Information structure where resulting data will be stored
 * @return TRUE if informations were succesfully read otherwise FALSE
 */
int filesystem_usage_sysdep(Info_T inf) {
  int size;
  struct statvfs usage;

  ASSERT(inf);

  if (statvfs(inf->priv.filesystem.mntpath, &usage) != 0) {
    LogError("%s: Error getting usage statistics for filesystem '%s' -- %s\n", prog, inf->priv.filesystem.mntpath, STRERROR);
    return FALSE;
  }
  size =                                   usage.f_frsize ? (usage.f_bsize / usage.f_frsize) : 1;
  inf->priv.filesystem.f_bsize =           usage.f_bsize;
  inf->priv.filesystem.f_blocks =          usage.f_blocks / size;
  inf->priv.filesystem.f_blocksfree =      usage.f_bavail / size;
  inf->priv.filesystem.f_blocksfreetotal = usage.f_bfree  / size;
  inf->priv.filesystem.f_files =           usage.f_files;
  inf->priv.filesystem.f_filesfree =       usage.f_ffree;
  inf->priv.filesystem.flags =             usage.f_flag;
  return TRUE;
}


#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "LINUX.h"

/* different structure in Linux: */
struct linux_stat {
    u_int64_t st_dev;
    u_int16_t padding_a;
    u_int32_t st_ino;
    u_int32_t st_mode;
    u_int32_t st_nlink;
    u_int32_t st_uid;
    u_int32_t st_gid;
    u_int64_t st_rdev;
    u_int16_t padding_b;
    int32_t st_size;
    int32_t st_blksize;
    int32_t st_blocks;
    int32_t st_atime;
    int32_t st_ausec;
    int32_t st_mtime;
    int32_t st_musec;
    int32_t st_ctime;
    int32_t st_cusec;
    u_int32_t padding_c;
    u_int32_t padding_d;
};

int LINUX_sys_fstat(int filedes, struct linux_stat *buf)
{ LINUX_INTERRUPT2(0x6c) }

int LINUX_fstat(int filedes, struct stat *buf)
{
    struct linux_stat lsbuf;
    int ret;
    
    memset(&lsbuf, 0, sizeof(struct linux_stat));
    ret = LINUX_sys_fstat(filedes, &lsbuf);
    
    /* now convert */
    if (ret == 0) {
#define C(a) buf->a = lsbuf.a
        C(st_dev);
        C(st_ino);
        C(st_mode);
        C(st_nlink);
        C(st_uid);
        C(st_gid);
        C(st_rdev);
        C(st_size);
        C(st_blksize);
        C(st_blocks);
        C(st_atime);
        C(st_mtime);
        C(st_ctime);
    }
    
    return ret;
}

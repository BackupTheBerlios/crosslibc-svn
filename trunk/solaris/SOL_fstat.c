#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "SOL.h"

/* different structure in Solaris: */
struct sol_stat {
    u_int32_t st_dev;
    int32_t padding_a[3];
    u_int32_t st_ino;
    u_int16_t st_mode;
    u_int32_t st_nlink;
    int32_t st_uid;
    int32_t st_gid;
    u_int32_t st_rdev;
    int32_t st_pad2[2];
    int32_t st_size;
    int32_t st_pad3;
    int32_t st_atime;
    int32_t st_ausec;
    int32_t st_mtime;
    int32_t st_musec;
    int32_t st_ctime;
    int32_t st_cusec;
    int32_t st_blksize;
    int32_t st_blocks;
    int8_t st_fstype[16];
    int32_t padding_b[8];
};

int SOL_sys_fstat(int filedes, struct sol_stat *buf)
{ SOL_INTERRUPT2(0x6c) }

int SOL_fstat(int filedes, struct stat *buf)
{
    struct sol_stat lsbuf;
    int ret;
    
    memset(&lsbuf, 0, sizeof(struct sol_stat));
    ret = SOL_sys_fstat(filedes, &lsbuf);
    
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

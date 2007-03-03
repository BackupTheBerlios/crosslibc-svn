#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "BSD.h"

/* different structure in BSD: */
struct bsd_stat {
    u_int32_t st_dev;
    u_int32_t st_ino;
    u_int16_t st_mode;
    u_int16_t st_nlink;
    u_int32_t st_uid;
    u_int32_t st_gid;
    u_int32_t st_rdev;
    int32_t st_atime;
    int32_t st_ausec;
    int32_t st_mtime;
    int32_t st_musec;
    int32_t st_ctime;
    int32_t st_cusec;
    int64_t st_size;
    int64_t st_blocks;
    u_int32_t st_blksize;
    u_int32_t st_flags;
    u_int32_t st_gen;
    int32_t st_lspare;
    int64_t st_qspare[2];
};

int BSD_sys_fstat(int filedes, struct bsd_stat *buf)
{ BSD_INTERRUPT2(0xbd) }

int BSD_fstat(int filedes, struct stat *buf)
{
    struct bsd_stat bsbuf;
    int ret;
    
    memset(&bsbuf, 0, sizeof(struct bsd_stat));
    ret = BSD_sys_fstat(filedes, &bsbuf);
    
    /* now convert */
    if (ret == 0) {
#define C(a) buf->a = bsbuf.a
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

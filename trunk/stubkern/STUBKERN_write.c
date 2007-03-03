#include <errno.h>
#include <unistd.h>

ssize_t STUBKERN_write(int fd, const void *buf, size_t count)
{
    /* stub("write"); */
    /* Can't stub() this, stub() calls write */
    return -1;
}

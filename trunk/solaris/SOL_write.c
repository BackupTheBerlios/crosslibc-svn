#include <errno.h>
#include <unistd.h>

#include "SOL.h"

ssize_t SOL_write(int fd, const void *buf, size_t count)
{ SOL_INTERRUPT3(0x4); }

#include <errno.h>
#include <unistd.h>

#include "LINUX.h"

ssize_t LINUX_write(int fd, const void *buf, size_t count)
{ LINUX_INTERRUPT3(0x4); }

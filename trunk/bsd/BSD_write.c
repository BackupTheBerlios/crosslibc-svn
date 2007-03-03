#include <errno.h>
#include <unistd.h>

#include "BSD.h"

ssize_t BSD_write(int fd, const void *buf, size_t count)
{ BSD_INTERRUPT3(0x4); }

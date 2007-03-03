#include <unistd.h>

#include "stub.h"

ssize_t BSD_read(int fd, void *buf, size_t count)
{
    stub("read");
    return -1;
}

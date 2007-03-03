#include <unistd.h>
#include "call.h"
DEF_GENERIC(ssize_t, read, int fd, void *buf, size_t count)
{ CALL_GENERIC(read, -1, fd, buf, count) }


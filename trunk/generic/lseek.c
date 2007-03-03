#include <unistd.h>
#include <sys/types.h>
#include "call.h"
DEF_GENERIC(off_t, lseek, int fildes, off_t offset, int whence)
{ CALL_GENERIC(lseek, -1, fildes, offset, whence) }


#include <sys/stat.h>
#include <sys/types.h>
#include "call.h"
DEF_GENERIC(int, mkfifo, const char *pathname, mode_t mode)
{ CALL_GENERIC(mkfifo, -1, pathname, mode) }

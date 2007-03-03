#include <unistd.h>
#include "call.h"
DEF_GENERIC(int, close, int fd)
{ CALL_GENERIC(close, -1, fd) }


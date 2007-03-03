#include <unistd.h>
#include <sys/types.h>
#include "call.h"
DEF_GENERIC(pid_t, getpid)
{ CALL_GENERIC(getpid, -1) }


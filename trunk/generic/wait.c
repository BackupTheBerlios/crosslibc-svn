#include <sys/types.h>
#include <sys/wait.h>
#include "call.h"
DEF_GENERIC(pid_t, wait, int *status)
{ CALL_GENERIC(wait, -1, status) }

#include <signal.h>
#include <sys/types.h>
#include "call.h"
DEF_GENERIC(int, kill, pid_t pid, int sig)
{ CALL_GENERIC(kill, -1, pid, sig) }


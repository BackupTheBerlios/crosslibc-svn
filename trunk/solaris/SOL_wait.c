#include <sys/types.h>
#include <sys/wait.h>
#include "SOL.h"
pid_t SOL_wait(int *status)
{ SOL_INTERRUPT1(0x72) }

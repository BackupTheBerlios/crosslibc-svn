#include <sys/types.h>
#include <sys/wait.h>
#include "BSD.h"
pid_t BSD_wait(int *status)
{ BSD_INTERRUPT1(0x72) }

#include <sys/types.h>
#include <sys/wait.h>
#include "LINUX.h"
pid_t LINUX_wait(int *status)
{ LINUX_INTERRUPT1(0x72) }

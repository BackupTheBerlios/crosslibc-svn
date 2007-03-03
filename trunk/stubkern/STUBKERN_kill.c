#include <signal.h>
#include <sys/types.h>
#include "stub.h"

int STUBKERN_kill(pid_t pid, int sig)
{
    stub("kill");
    return -1;
}


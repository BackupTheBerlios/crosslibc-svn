#include <sys/types.h>
#include <sys/wait.h>
#include "stub.h"
pid_t STUBKERN_wait(int *status)
{
    stub("wait");
    return -1;
}

#include <unistd.h>
#include <sys/types.h>
#include "stub.h"

pid_t STUBKERN_getpid()
{
    stub("getpid");
    return -1;
}


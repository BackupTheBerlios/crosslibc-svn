#include <unistd.h>
#include <sys/types.h>
#include "stub.h"

pid_t SOL_getpid()
{
    stub("getpid");
    return -1;
}


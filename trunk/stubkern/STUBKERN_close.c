#include "stub.h"

int STUBKERN_close(int fd)
{
    stub("close");
    return -1;
}


#include <unistd.h>

#include "stub.h"

void *STUBKERN_sbrk(ptrdiff_t increment)
{
    stub("sbrk");
    return NULL;
}


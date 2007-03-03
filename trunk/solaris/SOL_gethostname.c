#include <unistd.h>
#include "stub.h"

int SOL_gethostname(char *name, size_t len)
{
    stub("gethostname");
    return -1;
}

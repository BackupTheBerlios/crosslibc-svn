#include <unistd.h>
#include "stub.h"

int BSD_gethostname(char *name, size_t len)
{
    stub("gethostname");
    return -1;
}

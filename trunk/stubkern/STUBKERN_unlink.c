#include "stub.h"
int STUBKERN_unlink(const char *pathname)
{
    stub("unlink");
    return -1;
}

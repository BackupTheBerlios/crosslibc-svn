#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "stub.h"

int STUBKERN_open(const char *pathname, int flags, mode_t mode)
{
    stub("open");
    return -1;
}

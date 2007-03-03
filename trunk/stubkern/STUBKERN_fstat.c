#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "stub.h"

int STUBKERN_fstat(int filedes, struct stat *buf)
{
    stub("fstat");
    return -1;
}


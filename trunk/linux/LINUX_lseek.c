#include <unistd.h>
#include <sys/types.h>

#include "stub.h"

off_t LINUX_lseek(int fildes, off_t offset, int whence)
{
    stub("lseek");
    return -1;
}

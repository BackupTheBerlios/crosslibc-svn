#include <sys/stat.h>
#include <sys/stat.h>
#include "stub.h"

int STUBKERN_mkfifo(const char *pathname, mode_t mode)
{
    stub("mkfifo");
    return -1;
}

#include <sys/stat.h>
#include <sys/stat.h>
#include "stub.h"

int BSD_mkfifo(const char *pathname, mode_t mode)
{
    stub("mkfifo");
    return -1;
}

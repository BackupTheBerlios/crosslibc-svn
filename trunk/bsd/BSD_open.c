#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "BSD.h"

int BSD_open(const char *pathname, int flags, mode_t mode)
{ BSD_INTERRUPT3(0x5) }

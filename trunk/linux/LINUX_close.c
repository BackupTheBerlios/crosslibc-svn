#include "LINUX.h"

int LINUX_close(int fd)
{ LINUX_INTERRUPT1(0x6) }

#include "BSD.h"

int BSD_close(int fd)
{ BSD_INTERRUPT1(0x6) }

#include "LINUX.h"
int LINUX_unlink(const char *pathname)
{ LINUX_INTERRUPT1(0xa) }

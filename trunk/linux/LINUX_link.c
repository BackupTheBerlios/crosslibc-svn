#include "LINUX.h"
int LINUX_link(const char *oldpath, const char *newpath)
{ LINUX_INTERRUPT2(0x9) }

#include "LINUX.h"
int LINUX_rename(const char *oldpath, const char *newpath)
{ LINUX_INTERRUPT2(0x26) }

#include "BSD.h"
int BSD_rename(const char *oldpath, const char *newpath)
{ BSD_INTERRUPT2(0x26) }

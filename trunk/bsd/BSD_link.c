#include "BSD.h"
int BSD_link(const char *oldpath, const char *newpath)
{ BSD_INTERRUPT2(0x9) }

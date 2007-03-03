#include "SOL.h"
int SOL_rename(const char *oldpath, const char *newpath)
{ SOL_INTERRUPT2(0x26) }

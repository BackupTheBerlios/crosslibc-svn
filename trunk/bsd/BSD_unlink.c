#include "BSD.h"
int BSD_unlink(const char *pathname)
{ BSD_INTERRUPT1(0xa) }

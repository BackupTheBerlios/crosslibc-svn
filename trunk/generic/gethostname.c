#include <unistd.h>
#include "call.h"
DEF_GENERIC(int, gethostname, char *name, size_t len)
{ CALL_GENERIC(gethostname, -1, name, len) }

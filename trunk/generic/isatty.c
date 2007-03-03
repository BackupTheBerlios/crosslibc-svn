#include <unistd.h>
#include "call.h"
DEF_GENERIC(int, isatty, int desc)
{ CALL_GENERIC(isatty, 0, desc) }


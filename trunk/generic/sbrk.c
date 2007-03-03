#include <unistd.h>
#include "call.h"
DEF_GENERIC(void *, sbrk, ptrdiff_t increment)
{ CALL_GENERIC(sbrk, NULL, increment) }


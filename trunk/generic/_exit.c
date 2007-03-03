#include "call.h"
DEF_GENERIC(void, _exit, int status)
__attribute__((noreturn));

DEF_GENERIC(void, _exit, int status)
{ CALL_VGENERIC(_exit, status) }

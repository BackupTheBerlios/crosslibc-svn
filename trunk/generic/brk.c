#include "call.h"
DEF_GENERIC(int, brk, void *end_data_segment)
{ CALL_GENERIC(brk, -1, end_data_segment) }

#include "stub.h"
int STUBKERN_brk(void *end_data_segment)
{
    stub("brk");
    return -1;
}

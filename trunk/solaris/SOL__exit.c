#include "SOL.h"
/* need an int to not break _INTERRUPT* */
int SOL_sys__exit(int status)
{ SOL_INTERRUPT1(0x1) }

void SOL__exit(int status)
{ SOL_sys__exit(status); }

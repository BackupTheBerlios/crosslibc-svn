#include "LINUX.h"
/* need an int to not break _INTERRUPT* */
int LINUX_sys__exit(int status)
{ LINUX_INTERRUPT1(0x1) }

void LINUX__exit(int status)
{ LINUX_sys__exit(status); }

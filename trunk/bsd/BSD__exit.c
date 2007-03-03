#include "BSD.h"
/* need an int to not break _INTERRUPT* */
int BSD_sys__exit(int status)
{ BSD_INTERRUPT1(0x1) }

void BSD__exit(int status)
{ BSD_sys__exit(status); }

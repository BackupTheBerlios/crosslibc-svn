#include <math.h>
int
__isnanf (float _x)
{
  unsigned short _sw;
  __asm__ ("fxam;"
	   "fstsw %%ax": "=a" (_sw) : "t" (_x) );
  return (_sw & (FP_NAN | FP_NORMAL | FP_INFINITE | FP_ZERO | FP_SUBNORMAL))
    == FP_NAN;
}

int __attribute__ ((alias ("__isnanf"))) isnanf (float);

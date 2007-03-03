#ifndef LINUX_H
#define LINUX_H

#include <errno.h>

extern int LINUX_retcode;

#ifdef __i386__
#include "x86/int.h"
#endif

#endif

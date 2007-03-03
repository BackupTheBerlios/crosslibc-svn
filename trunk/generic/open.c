#include <fcntl.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "call.h"
DEF_GENERIC(int, open, const char *pathname, int flags, ...)
{
    va_list argp;
    mode_t mode;
    
    if (flags & O_CREAT) {
        va_start(argp, flags);
        mode = va_arg(argp, mode_t);
        va_end(argp);
    } else {
        mode = 0;
    }
    
    CALL_GENERIC(open, -1, pathname, flags, mode)
}

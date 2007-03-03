#include "call.h"
DEF_GENERIC(int, unlink, const char *pathname)
{
    if (!pathname) {
        errno = EINVAL;
        return -1;
    }
    CALL_GENERIC(unlink, -1, pathname)
}

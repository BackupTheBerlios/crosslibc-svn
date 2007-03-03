#include "call.h"
DEF_GENERIC(int, link, const char *oldpath, const char *newpath)
{
    if (!oldpath || !newpath) {
        errno = EINVAL;
        return -1;
    }
    CALL_GENERIC(link, -1, oldpath, newpath)
}

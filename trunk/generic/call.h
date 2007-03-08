#include <errno.h>

extern int OSCALL_which;

#define OSCALL_LINUX 0
#define OSCALL_BSD 1
#define OSCALL_SOL 2
#define OSCALL_UWIN 3

/* CALL_GENERIC:
 * a = function
 * b = default
 * c... = args */
#define CALL_GENERIC(a, b, c...) \
switch (OSCALL_which) { \
    case OSCALL_LINUX: \
        return LINUX_ ## a(c); \
    case OSCALL_BSD: \
        return BSD_ ## a(c); \
    case OSCALL_SOL: \
        return SOL_ ## a(c); \
    case OSCALL_UWIN: \
        return UWIN_ ## a(c); \
} \
errno = ENOSYS; \
return b;

#define CALL_VGENERIC(a, b...) \
switch (OSCALL_which) { \
    case OSCALL_LINUX: \
        LINUX_ ## a(b); \
    case OSCALL_BSD: \
        BSD_ ## a(b); \
    case OSCALL_SOL: \
        SOL_ ## a(b); \
    case OSCALL_UWIN: \
        UWIN_ ## a(b); \
    default: \
        errno = ENOSYS; \
}

/* DEF_GENERIC:
 * a = return type
 * b = function
 * c... = args */
#define DEF_GENERIC(a, b, c...) \
a LINUX_ ## b(c); \
a BSD_ ## b(c); \
a SOL_ ## b(c); \
a UWIN_ ## b(c); \
a b(c)  

void OSCALL_determine();


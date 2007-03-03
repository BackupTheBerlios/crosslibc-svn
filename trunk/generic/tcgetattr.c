#include <termios.h>
#include <unistd.h>
#include "call.h"
DEF_GENERIC(int, tcgetattr, int fd, struct termios *termios_p)
{ CALL_GENERIC(tcgetattr, -1, fd, termios_p) }

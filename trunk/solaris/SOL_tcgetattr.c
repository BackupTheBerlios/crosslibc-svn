#include <termios.h>
#include <unistd.h>
#include "stub.h"

int SOL_tcgetattr(int fd, struct termios *termios_p)
{
    stub("tcgetattr");
    return -1;
}

#include <termios.h>
#include <unistd.h>
#include "stub.h"

int STUBKERN_tcgetattr(int fd, struct termios *termios_p)
{
    stub("tcgetattr");
    return -1;
}

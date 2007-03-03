#include <unistd.h>

#include "stub.h"

void stub(const char *nm)
{
    write(2, nm, strlen(nm));
    write(2, " is stubbed!\n", 13);
}


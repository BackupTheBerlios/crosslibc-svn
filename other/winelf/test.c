#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    puts("Hello, world!");

    for (i = 0; i < argc; i++) {
        printf("Arg %d: %s\n", i, argv[i]);
    }

    return 0;
}

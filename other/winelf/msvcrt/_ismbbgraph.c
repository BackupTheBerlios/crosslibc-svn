#include "msvcrt.h"
void _elfimplib__ismbbgraph() asm("ismbbgraph");
void *_imp___ismbbgraph = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbgraph() {
load_dll_msvcrt();
_imp___ismbbgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbgraph");
}
void _elfimplib__ismbbgraph() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbgraph));
}

void _elfimplibmang__ismbbgraph() asm("_ismbbgraph");
void _elfimplibmang__ismbbgraph() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbgraph));
}


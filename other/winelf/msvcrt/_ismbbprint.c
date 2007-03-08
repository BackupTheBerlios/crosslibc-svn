#include "msvcrt.h"
void _elfimplib__ismbbprint() asm("ismbbprint");
void *_imp___ismbbprint = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbprint() {
load_dll_msvcrt();
_imp___ismbbprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbprint");
}
void _elfimplib__ismbbprint() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbprint));
}


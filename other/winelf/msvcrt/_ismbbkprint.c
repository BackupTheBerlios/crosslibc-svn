#include "msvcrt.h"
void _elfimplib__ismbbkprint() asm("ismbbkprint");
void *_imp___ismbbkprint = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbkprint() {
load_dll_msvcrt();
_imp___ismbbkprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkprint");
}
void _elfimplib__ismbbkprint() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbkprint));
}

void _elfimplibmang__ismbbkprint() asm("_ismbbkprint");
void _elfimplibmang__ismbbkprint() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbkprint));
}


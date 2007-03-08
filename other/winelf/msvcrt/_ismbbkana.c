#include "msvcrt.h"
void _elfimplib__ismbbkana() asm("ismbbkana");
void *_imp___ismbbkana = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbkana() {
load_dll_msvcrt();
_imp___ismbbkana = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkana");
}
void _elfimplib__ismbbkana() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbkana));
}


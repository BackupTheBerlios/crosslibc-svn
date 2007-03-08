#include "msvcrt.h"
void _elfimplib__ismbbkpunct() asm("ismbbkpunct");
void *_imp___ismbbkpunct = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbkpunct() {
load_dll_msvcrt();
_imp___ismbbkpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkpunct");
}
void _elfimplib__ismbbkpunct() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbkpunct));
}


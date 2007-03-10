#include "msvcrt.h"
void _elfimplib__ismbbpunct() asm("ismbbpunct");
void *_imp___ismbbpunct = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbpunct() {
load_dll_msvcrt();
_imp___ismbbpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbpunct");
}
void _elfimplib__ismbbpunct() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbpunct));
}

void _elfimplibmang__ismbbpunct() asm("_ismbbpunct");
void _elfimplibmang__ismbbpunct() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbpunct));
}


#include "msvcrt.h"
void _elfimplib__ismbbtrail() asm("ismbbtrail");
void *_imp___ismbbtrail = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbtrail() {
load_dll_msvcrt();
_imp___ismbbtrail = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbtrail");
}
void _elfimplib__ismbbtrail() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbtrail));
}


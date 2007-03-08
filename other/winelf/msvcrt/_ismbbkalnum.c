#include "msvcrt.h"
void _elfimplib__ismbbkalnum() asm("ismbbkalnum");
void *_imp___ismbbkalnum = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbkalnum() {
load_dll_msvcrt();
_imp___ismbbkalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkalnum");
}
void _elfimplib__ismbbkalnum() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbkalnum));
}


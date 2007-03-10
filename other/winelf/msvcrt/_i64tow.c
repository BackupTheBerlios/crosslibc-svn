#include "msvcrt.h"
void _elfimplib__i64tow() asm("i64tow");
void *_imp___i64tow = NULL;
__attribute__((constructor)) void _elfimplib_init__i64tow() {
load_dll_msvcrt();
_imp___i64tow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_i64tow");
}
void _elfimplib__i64tow() {
asm("leave\njmp *%0" : : "r"(_imp___i64tow));
}

void _elfimplibmang__i64tow() asm("_i64tow");
void _elfimplibmang__i64tow() {
asm("leave\njmp *%0" : : "r"(_imp___i64tow));
}


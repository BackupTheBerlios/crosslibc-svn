#include "msvcrt.h"
void _elfimplib__ctype() asm("ctype");
void *_imp___ctype = NULL;
__attribute__((constructor)) void _elfimplib_init__ctype() {
load_dll_msvcrt();
_imp___ctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ctype");
}
void _elfimplib__ctype() {
asm("leave\njmp *%0" : : "r"(_imp___ctype));
}


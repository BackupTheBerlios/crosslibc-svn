#include "msvcrt.h"
void _elfimplib__ismbblead() asm("ismbblead");
void *_imp___ismbblead = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbblead() {
load_dll_msvcrt();
_imp___ismbblead = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbblead");
}
void _elfimplib__ismbblead() {
asm("leave\njmp *%0" : : "r"(_imp___ismbblead));
}


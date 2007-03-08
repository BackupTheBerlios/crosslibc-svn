#include "msvcrt.h"
void _elfimplib__cwprintf() asm("cwprintf");
void *_imp___cwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__cwprintf() {
load_dll_msvcrt();
_imp___cwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cwprintf");
}
void _elfimplib__cwprintf() {
asm("leave\njmp *%0" : : "r"(_imp___cwprintf));
}


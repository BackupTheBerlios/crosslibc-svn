#include "msvcrt.h"
void _elfimplib__scwprintf() asm("scwprintf");
void *_imp___scwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__scwprintf() {
load_dll_msvcrt();
_imp___scwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_scwprintf");
}
void _elfimplib__scwprintf() {
asm("leave\njmp *%0" : : "r"(_imp___scwprintf));
}


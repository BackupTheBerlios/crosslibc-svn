#include "msvcrt.h"
void _elfimplib__wtoi() asm("wtoi");
void *_imp___wtoi = NULL;
__attribute__((constructor)) void _elfimplib_init__wtoi() {
load_dll_msvcrt();
_imp___wtoi = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtoi");
}
void _elfimplib__wtoi() {
asm("leave\njmp *%0" : : "r"(_imp___wtoi));
}


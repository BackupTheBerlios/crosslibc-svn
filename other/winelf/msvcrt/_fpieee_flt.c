#include "msvcrt.h"
void _elfimplib__fpieee_flt() asm("fpieee_flt");
void *_imp___fpieee_flt = NULL;
__attribute__((constructor)) void _elfimplib_init__fpieee_flt() {
load_dll_msvcrt();
_imp___fpieee_flt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fpieee_flt");
}
void _elfimplib__fpieee_flt() {
asm("leave\njmp *%0" : : "r"(_imp___fpieee_flt));
}


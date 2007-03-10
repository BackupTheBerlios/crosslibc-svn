#include "msvcrt.h"
void _elfimplib__lfind() asm("lfind");
void *_imp___lfind = NULL;
__attribute__((constructor)) void _elfimplib_init__lfind() {
load_dll_msvcrt();
_imp___lfind = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lfind");
}
void _elfimplib__lfind() {
asm("leave\njmp *%0" : : "r"(_imp___lfind));
}

void _elfimplibmang__lfind() asm("_lfind");
void _elfimplibmang__lfind() {
asm("leave\njmp *%0" : : "r"(_imp___lfind));
}


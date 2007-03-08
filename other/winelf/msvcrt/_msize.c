#include "msvcrt.h"
void _elfimplib__msize() asm("msize");
void *_imp___msize = NULL;
__attribute__((constructor)) void _elfimplib_init__msize() {
load_dll_msvcrt();
_imp___msize = (void *) _elf_GetProcAddress(_dll_msvcrt, "_msize");
}
void _elfimplib__msize() {
asm("leave\njmp *%0" : : "r"(_imp___msize));
}


#include "msvcrt.h"
void _elfimplib__wunlink() asm("wunlink");
void *_imp___wunlink = NULL;
__attribute__((constructor)) void _elfimplib_init__wunlink() {
load_dll_msvcrt();
_imp___wunlink = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wunlink");
}
void _elfimplib__wunlink() {
asm("leave\njmp *%0" : : "r"(_imp___wunlink));
}


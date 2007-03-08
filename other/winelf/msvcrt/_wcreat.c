#include "msvcrt.h"
void _elfimplib__wcreat() asm("wcreat");
void *_imp___wcreat = NULL;
__attribute__((constructor)) void _elfimplib_init__wcreat() {
load_dll_msvcrt();
_imp___wcreat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcreat");
}
void _elfimplib__wcreat() {
asm("leave\njmp *%0" : : "r"(_imp___wcreat));
}


#include "msvcrt.h"
void _elfimplib__controlfp() asm("controlfp");
void *_imp___controlfp = NULL;
__attribute__((constructor)) void _elfimplib_init__controlfp() {
load_dll_msvcrt();
_imp___controlfp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_controlfp");
}
void _elfimplib__controlfp() {
asm("leave\njmp *%0" : : "r"(_imp___controlfp));
}


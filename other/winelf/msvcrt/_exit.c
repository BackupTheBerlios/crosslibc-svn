#include "msvcrt.h"
void _elfimplib__exit() asm("_exit");
void *_imp___exit = NULL;
__attribute__((constructor)) void _elfimplib_init__exit() {
load_dll_msvcrt();
_imp___exit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_exit");
}
void _elfimplib__exit() {
asm("leave\njmp *%0" : : "r"(_imp___exit));
}


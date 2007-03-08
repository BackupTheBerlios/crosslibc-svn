#include "msvcrt.h"
void _elfimplib__onexit() asm("onexit");
void *_imp___onexit = NULL;
__attribute__((constructor)) void _elfimplib_init__onexit() {
load_dll_msvcrt();
_imp___onexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_onexit");
}
void _elfimplib__onexit() {
asm("leave\njmp *%0" : : "r"(_imp___onexit));
}


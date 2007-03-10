#include "msvcrt.h"
void _elfimplib__wmakepath() asm("wmakepath");
void *_imp___wmakepath = NULL;
__attribute__((constructor)) void _elfimplib_init__wmakepath() {
load_dll_msvcrt();
_imp___wmakepath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wmakepath");
}
void _elfimplib__wmakepath() {
asm("leave\njmp *%0" : : "r"(_imp___wmakepath));
}

void _elfimplibmang__wmakepath() asm("_wmakepath");
void _elfimplibmang__wmakepath() {
asm("leave\njmp *%0" : : "r"(_imp___wmakepath));
}


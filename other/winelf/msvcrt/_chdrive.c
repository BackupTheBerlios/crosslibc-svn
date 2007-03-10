#include "msvcrt.h"
void _elfimplib__chdrive() asm("chdrive");
void *_imp___chdrive = NULL;
__attribute__((constructor)) void _elfimplib_init__chdrive() {
load_dll_msvcrt();
_imp___chdrive = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chdrive");
}
void _elfimplib__chdrive() {
asm("leave\njmp *%0" : : "r"(_imp___chdrive));
}

void _elfimplibmang__chdrive() asm("_chdrive");
void _elfimplibmang__chdrive() {
asm("leave\njmp *%0" : : "r"(_imp___chdrive));
}


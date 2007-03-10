#include "msvcrt.h"
void _elfimplib__finite() asm("finite");
void *_imp___finite = NULL;
__attribute__((constructor)) void _elfimplib_init__finite() {
load_dll_msvcrt();
_imp___finite = (void *) _elf_GetProcAddress(_dll_msvcrt, "_finite");
}
void _elfimplib__finite() {
asm("leave\njmp *%0" : : "r"(_imp___finite));
}

void _elfimplibmang__finite() asm("_finite");
void _elfimplibmang__finite() {
asm("leave\njmp *%0" : : "r"(_imp___finite));
}


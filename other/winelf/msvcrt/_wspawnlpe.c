#include "msvcrt.h"
void _elfimplib__wspawnlpe() asm("wspawnlpe");
void *_imp___wspawnlpe = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnlpe() {
load_dll_msvcrt();
_imp___wspawnlpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnlpe");
}
void _elfimplib__wspawnlpe() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnlpe));
}

void _elfimplibmang__wspawnlpe() asm("_wspawnlpe");
void _elfimplibmang__wspawnlpe() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnlpe));
}


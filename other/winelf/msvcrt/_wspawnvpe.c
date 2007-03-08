#include "msvcrt.h"
void _elfimplib__wspawnvpe() asm("wspawnvpe");
void *_imp___wspawnvpe = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnvpe() {
load_dll_msvcrt();
_imp___wspawnvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnvpe");
}
void _elfimplib__wspawnvpe() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnvpe));
}


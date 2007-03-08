#include "msvcrt.h"
void _elfimplib__execlpe() asm("execlpe");
void *_imp___execlpe = NULL;
__attribute__((constructor)) void _elfimplib_init__execlpe() {
load_dll_msvcrt();
_imp___execlpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execlpe");
}
void _elfimplib__execlpe() {
asm("leave\njmp *%0" : : "r"(_imp___execlpe));
}


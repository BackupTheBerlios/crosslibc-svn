#include "msvcrt.h"
void _elfimplib__execlp() asm("execlp");
void *_imp___execlp = NULL;
__attribute__((constructor)) void _elfimplib_init__execlp() {
load_dll_msvcrt();
_imp___execlp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execlp");
}
void _elfimplib__execlp() {
asm("leave\njmp *%0" : : "r"(_imp___execlp));
}


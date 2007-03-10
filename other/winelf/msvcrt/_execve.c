#include "msvcrt.h"
void _elfimplib__execve() asm("execve");
void *_imp___execve = NULL;
__attribute__((constructor)) void _elfimplib_init__execve() {
load_dll_msvcrt();
_imp___execve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execve");
}
void _elfimplib__execve() {
asm("leave\njmp *%0" : : "r"(_imp___execve));
}

void _elfimplibmang__execve() asm("_execve");
void _elfimplibmang__execve() {
asm("leave\njmp *%0" : : "r"(_imp___execve));
}


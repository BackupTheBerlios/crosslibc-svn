#include "msvcrt.h"
void _elfimplib__execvpe() asm("execvpe");
void *_imp___execvpe = NULL;
__attribute__((constructor)) void _elfimplib_init__execvpe() {
load_dll_msvcrt();
_imp___execvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execvpe");
}
void _elfimplib__execvpe() {
asm("leave\njmp *%0" : : "r"(_imp___execvpe));
}


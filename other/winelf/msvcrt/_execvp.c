#include "msvcrt.h"
void _elfimplib__execvp() asm("execvp");
void *_imp___execvp = NULL;
__attribute__((constructor)) void _elfimplib_init__execvp() {
load_dll_msvcrt();
_imp___execvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execvp");
}
void _elfimplib__execvp() {
asm("leave\njmp *%0" : : "r"(_imp___execvp));
}

void _elfimplibmang__execvp() asm("_execvp");
void _elfimplibmang__execvp() {
asm("leave\njmp *%0" : : "r"(_imp___execvp));
}


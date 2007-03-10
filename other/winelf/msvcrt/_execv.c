#include "msvcrt.h"
void _elfimplib__execv() asm("execv");
void *_imp___execv = NULL;
__attribute__((constructor)) void _elfimplib_init__execv() {
load_dll_msvcrt();
_imp___execv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execv");
}
void _elfimplib__execv() {
asm("leave\njmp *%0" : : "r"(_imp___execv));
}

void _elfimplibmang__execv() asm("_execv");
void _elfimplibmang__execv() {
asm("leave\njmp *%0" : : "r"(_imp___execv));
}


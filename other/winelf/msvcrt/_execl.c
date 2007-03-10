#include "msvcrt.h"
void _elfimplib__execl() asm("execl");
void *_imp___execl = NULL;
__attribute__((constructor)) void _elfimplib_init__execl() {
load_dll_msvcrt();
_imp___execl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execl");
}
void _elfimplib__execl() {
asm("leave\njmp *%0" : : "r"(_imp___execl));
}

void _elfimplibmang__execl() asm("_execl");
void _elfimplibmang__execl() {
asm("leave\njmp *%0" : : "r"(_imp___execl));
}


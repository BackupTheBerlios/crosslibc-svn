#include "msvcrt.h"
void _elfimplib__execle() asm("execle");
void *_imp___execle = NULL;
__attribute__((constructor)) void _elfimplib_init__execle() {
load_dll_msvcrt();
_imp___execle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execle");
}
void _elfimplib__execle() {
asm("leave\njmp *%0" : : "r"(_imp___execle));
}

void _elfimplibmang__execle() asm("_execle");
void _elfimplibmang__execle() {
asm("leave\njmp *%0" : : "r"(_imp___execle));
}


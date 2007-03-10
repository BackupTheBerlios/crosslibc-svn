#include "msvcrt.h"
void _elfimplib__wspawnvp() asm("wspawnvp");
void *_imp___wspawnvp = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnvp() {
load_dll_msvcrt();
_imp___wspawnvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnvp");
}
void _elfimplib__wspawnvp() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnvp));
}

void _elfimplibmang__wspawnvp() asm("_wspawnvp");
void _elfimplibmang__wspawnvp() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnvp));
}


#include "msvcrt.h"
void _elfimplib__ungetch() asm("ungetch");
void *_imp___ungetch = NULL;
__attribute__((constructor)) void _elfimplib_init__ungetch() {
load_dll_msvcrt();
_imp___ungetch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ungetch");
}
void _elfimplib__ungetch() {
asm("leave\njmp *%0" : : "r"(_imp___ungetch));
}

void _elfimplibmang__ungetch() asm("_ungetch");
void _elfimplibmang__ungetch() {
asm("leave\njmp *%0" : : "r"(_imp___ungetch));
}


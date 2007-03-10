#include "msvcrt.h"
void _elfimplib__endthreadex() asm("endthreadex");
void *_imp___endthreadex = NULL;
__attribute__((constructor)) void _elfimplib_init__endthreadex() {
load_dll_msvcrt();
_imp___endthreadex = (void *) _elf_GetProcAddress(_dll_msvcrt, "_endthreadex");
}
void _elfimplib__endthreadex() {
asm("leave\njmp *%0" : : "r"(_imp___endthreadex));
}

void _elfimplibmang__endthreadex() asm("_endthreadex");
void _elfimplibmang__endthreadex() {
asm("leave\njmp *%0" : : "r"(_imp___endthreadex));
}


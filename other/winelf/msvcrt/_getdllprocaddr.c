#include "msvcrt.h"
void _elfimplib__getdllprocaddr() asm("getdllprocaddr");
void *_imp___getdllprocaddr = NULL;
__attribute__((constructor)) void _elfimplib_init__getdllprocaddr() {
load_dll_msvcrt();
_imp___getdllprocaddr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdllprocaddr");
}
void _elfimplib__getdllprocaddr() {
asm("leave\njmp *%0" : : "r"(_imp___getdllprocaddr));
}


#include "msvcrt.h"
void _elfimplib__pipe() asm("pipe");
void *_imp___pipe = NULL;
__attribute__((constructor)) void _elfimplib_init__pipe() {
load_dll_msvcrt();
_imp___pipe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pipe");
}
void _elfimplib__pipe() {
asm("leave\njmp *%0" : : "r"(_imp___pipe));
}

void _elfimplibmang__pipe() asm("_pipe");
void _elfimplibmang__pipe() {
asm("leave\njmp *%0" : : "r"(_imp___pipe));
}


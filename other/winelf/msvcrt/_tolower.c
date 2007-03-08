#include "msvcrt.h"
void _elfimplib__tolower() asm("tolower");
void *_imp___tolower = NULL;
__attribute__((constructor)) void _elfimplib_init__tolower() {
load_dll_msvcrt();
_imp___tolower = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tolower");
}
void _elfimplib__tolower() {
asm("leave\njmp *%0" : : "r"(_imp___tolower));
}


#include "msvcrt.h"
void _elfimplib__mbsspn() asm("mbsspn");
void *_imp___mbsspn = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsspn() {
load_dll_msvcrt();
_imp___mbsspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsspn");
}
void _elfimplib__mbsspn() {
asm("leave\njmp *%0" : : "r"(_imp___mbsspn));
}

void _elfimplibmang__mbsspn() asm("_mbsspn");
void _elfimplibmang__mbsspn() {
asm("leave\njmp *%0" : : "r"(_imp___mbsspn));
}


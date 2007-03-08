#include "msvcrt.h"
void _elfimplib__flsbuf() asm("flsbuf");
void *_imp___flsbuf = NULL;
__attribute__((constructor)) void _elfimplib_init__flsbuf() {
load_dll_msvcrt();
_imp___flsbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_flsbuf");
}
void _elfimplib__flsbuf() {
asm("leave\njmp *%0" : : "r"(_imp___flsbuf));
}


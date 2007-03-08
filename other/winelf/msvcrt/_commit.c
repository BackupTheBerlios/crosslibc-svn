#include "msvcrt.h"
void _elfimplib__commit() asm("commit");
void *_imp___commit = NULL;
__attribute__((constructor)) void _elfimplib_init__commit() {
load_dll_msvcrt();
_imp___commit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_commit");
}
void _elfimplib__commit() {
asm("leave\njmp *%0" : : "r"(_imp___commit));
}


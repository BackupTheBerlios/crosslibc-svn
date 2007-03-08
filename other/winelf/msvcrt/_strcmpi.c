#include "msvcrt.h"
void _elfimplib__strcmpi() asm("strcmpi");
void *_imp___strcmpi = NULL;
__attribute__((constructor)) void _elfimplib_init__strcmpi() {
load_dll_msvcrt();
_imp___strcmpi = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strcmpi");
}
void _elfimplib__strcmpi() {
asm("leave\njmp *%0" : : "r"(_imp___strcmpi));
}


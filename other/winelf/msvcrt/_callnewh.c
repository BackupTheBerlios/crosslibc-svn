#include "msvcrt.h"
void _elfimplib__callnewh() asm("callnewh");
void *_imp___callnewh = NULL;
__attribute__((constructor)) void _elfimplib_init__callnewh() {
load_dll_msvcrt();
_imp___callnewh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_callnewh");
}
void _elfimplib__callnewh() {
asm("leave\njmp *%0" : : "r"(_imp___callnewh));
}


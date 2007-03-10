#include "msvcrt.h"
void _elfimplib__ismbclower() asm("ismbclower");
void *_imp___ismbclower = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbclower() {
load_dll_msvcrt();
_imp___ismbclower = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbclower");
}
void _elfimplib__ismbclower() {
asm("leave\njmp *%0" : : "r"(_imp___ismbclower));
}

void _elfimplibmang__ismbclower() asm("_ismbclower");
void _elfimplibmang__ismbclower() {
asm("leave\njmp *%0" : : "r"(_imp___ismbclower));
}


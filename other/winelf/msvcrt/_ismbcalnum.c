#include "msvcrt.h"
void _elfimplib__ismbcalnum() asm("ismbcalnum");
void *_imp___ismbcalnum = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcalnum() {
load_dll_msvcrt();
_imp___ismbcalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcalnum");
}
void _elfimplib__ismbcalnum() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcalnum));
}


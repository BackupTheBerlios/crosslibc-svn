#include "msvcrt.h"
void _elfimplib__ismbcalpha() asm("ismbcalpha");
void *_imp___ismbcalpha = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcalpha() {
load_dll_msvcrt();
_imp___ismbcalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcalpha");
}
void _elfimplib__ismbcalpha() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcalpha));
}


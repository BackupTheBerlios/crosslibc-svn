#include "msvcrt.h"
void _elfimplib__ismbcupper() asm("ismbcupper");
void *_imp___ismbcupper = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcupper() {
load_dll_msvcrt();
_imp___ismbcupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcupper");
}
void _elfimplib__ismbcupper() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcupper));
}


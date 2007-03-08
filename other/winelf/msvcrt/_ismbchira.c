#include "msvcrt.h"
void _elfimplib__ismbchira() asm("ismbchira");
void *_imp___ismbchira = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbchira() {
load_dll_msvcrt();
_imp___ismbchira = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbchira");
}
void _elfimplib__ismbchira() {
asm("leave\njmp *%0" : : "r"(_imp___ismbchira));
}


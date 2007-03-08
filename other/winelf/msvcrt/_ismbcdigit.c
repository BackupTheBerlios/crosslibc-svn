#include "msvcrt.h"
void _elfimplib__ismbcdigit() asm("ismbcdigit");
void *_imp___ismbcdigit = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcdigit() {
load_dll_msvcrt();
_imp___ismbcdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcdigit");
}
void _elfimplib__ismbcdigit() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcdigit));
}


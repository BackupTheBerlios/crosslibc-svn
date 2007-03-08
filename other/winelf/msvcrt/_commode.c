#include "msvcrt.h"
void _elfimplib__commode() asm("commode");
void *_imp___commode = NULL;
__attribute__((constructor)) void _elfimplib_init__commode() {
load_dll_msvcrt();
_imp___commode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_commode");
}
void _elfimplib__commode() {
asm("leave\njmp *%0" : : "r"(_imp___commode));
}


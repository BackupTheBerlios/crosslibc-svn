#include "msvcrt.h"
void _elfimplib__CItan() asm("CItan");
void *_imp___CItan = NULL;
__attribute__((constructor)) void _elfimplib_init__CItan() {
load_dll_msvcrt();
_imp___CItan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CItan");
}
void _elfimplib__CItan() {
asm("leave\njmp *%0" : : "r"(_imp___CItan));
}


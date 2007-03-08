#include "msvcrt.h"
void _elfimplib__CIexp() asm("CIexp");
void *_imp___CIexp = NULL;
__attribute__((constructor)) void _elfimplib_init__CIexp() {
load_dll_msvcrt();
_imp___CIexp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIexp");
}
void _elfimplib__CIexp() {
asm("leave\njmp *%0" : : "r"(_imp___CIexp));
}


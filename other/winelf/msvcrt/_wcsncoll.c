#include "msvcrt.h"
void _elfimplib__wcsncoll() asm("wcsncoll");
void *_imp___wcsncoll = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsncoll() {
load_dll_msvcrt();
_imp___wcsncoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsncoll");
}
void _elfimplib__wcsncoll() {
asm("leave\njmp *%0" : : "r"(_imp___wcsncoll));
}


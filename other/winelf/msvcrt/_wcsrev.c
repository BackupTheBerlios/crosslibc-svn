#include "msvcrt.h"
void _elfimplib__wcsrev() asm("wcsrev");
void *_imp___wcsrev = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsrev() {
load_dll_msvcrt();
_imp___wcsrev = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsrev");
}
void _elfimplib__wcsrev() {
asm("leave\njmp *%0" : : "r"(_imp___wcsrev));
}


#include "msvcrt.h"
void _elfimplib__wcsset() asm("wcsset");
void *_imp___wcsset = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsset() {
load_dll_msvcrt();
_imp___wcsset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsset");
}
void _elfimplib__wcsset() {
asm("leave\njmp *%0" : : "r"(_imp___wcsset));
}


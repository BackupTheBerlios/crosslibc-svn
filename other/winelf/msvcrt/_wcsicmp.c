#include "msvcrt.h"
void _elfimplib__wcsicmp() asm("wcsicmp");
void *_imp___wcsicmp = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsicmp() {
load_dll_msvcrt();
_imp___wcsicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsicmp");
}
void _elfimplib__wcsicmp() {
asm("leave\njmp *%0" : : "r"(_imp___wcsicmp));
}

void _elfimplibmang__wcsicmp() asm("_wcsicmp");
void _elfimplibmang__wcsicmp() {
asm("leave\njmp *%0" : : "r"(_imp___wcsicmp));
}


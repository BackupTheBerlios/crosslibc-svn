#include "msvcrt.h"
void _elfimplib__wcsnicmp() asm("wcsnicmp");
void *_imp___wcsnicmp = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsnicmp() {
load_dll_msvcrt();
_imp___wcsnicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsnicmp");
}
void _elfimplib__wcsnicmp() {
asm("leave\njmp *%0" : : "r"(_imp___wcsnicmp));
}

void _elfimplibmang__wcsnicmp() asm("_wcsnicmp");
void _elfimplibmang__wcsnicmp() {
asm("leave\njmp *%0" : : "r"(_imp___wcsnicmp));
}


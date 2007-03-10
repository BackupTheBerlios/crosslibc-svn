#include "msvcrt.h"
void _elfimplib__wcsdup() asm("wcsdup");
void *_imp___wcsdup = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsdup() {
load_dll_msvcrt();
_imp___wcsdup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsdup");
}
void _elfimplib__wcsdup() {
asm("leave\njmp *%0" : : "r"(_imp___wcsdup));
}

void _elfimplibmang__wcsdup() asm("_wcsdup");
void _elfimplibmang__wcsdup() {
asm("leave\njmp *%0" : : "r"(_imp___wcsdup));
}


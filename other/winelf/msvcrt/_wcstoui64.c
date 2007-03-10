#include "msvcrt.h"
void _elfimplib__wcstoui64() asm("wcstoui64");
void *_imp___wcstoui64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wcstoui64() {
load_dll_msvcrt();
_imp___wcstoui64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcstoui64");
}
void _elfimplib__wcstoui64() {
asm("leave\njmp *%0" : : "r"(_imp___wcstoui64));
}

void _elfimplibmang__wcstoui64() asm("_wcstoui64");
void _elfimplibmang__wcstoui64() {
asm("leave\njmp *%0" : : "r"(_imp___wcstoui64));
}


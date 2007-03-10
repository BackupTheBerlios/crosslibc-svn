#include "msvcrt.h"
void _elfimplib__wstat64() asm("wstat64");
void *_imp___wstat64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wstat64() {
load_dll_msvcrt();
_imp___wstat64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstat64");
}
void _elfimplib__wstat64() {
asm("leave\njmp *%0" : : "r"(_imp___wstat64));
}

void _elfimplibmang__wstat64() asm("_wstat64");
void _elfimplibmang__wstat64() {
asm("leave\njmp *%0" : : "r"(_imp___wstat64));
}


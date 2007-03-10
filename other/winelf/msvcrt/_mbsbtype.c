#include "msvcrt.h"
void _elfimplib__mbsbtype() asm("mbsbtype");
void *_imp___mbsbtype = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsbtype() {
load_dll_msvcrt();
_imp___mbsbtype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsbtype");
}
void _elfimplib__mbsbtype() {
asm("leave\njmp *%0" : : "r"(_imp___mbsbtype));
}

void _elfimplibmang__mbsbtype() asm("_mbsbtype");
void _elfimplibmang__mbsbtype() {
asm("leave\njmp *%0" : : "r"(_imp___mbsbtype));
}


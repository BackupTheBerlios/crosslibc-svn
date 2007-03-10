#include "msvcrt.h"
void _elfimplib__mbbtype() asm("mbbtype");
void *_imp___mbbtype = NULL;
__attribute__((constructor)) void _elfimplib_init__mbbtype() {
load_dll_msvcrt();
_imp___mbbtype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbbtype");
}
void _elfimplib__mbbtype() {
asm("leave\njmp *%0" : : "r"(_imp___mbbtype));
}

void _elfimplibmang__mbbtype() asm("_mbbtype");
void _elfimplibmang__mbbtype() {
asm("leave\njmp *%0" : : "r"(_imp___mbbtype));
}


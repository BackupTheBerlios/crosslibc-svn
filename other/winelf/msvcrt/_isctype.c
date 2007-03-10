#include "msvcrt.h"
void _elfimplib__isctype() asm("isctype");
void *_imp___isctype = NULL;
__attribute__((constructor)) void _elfimplib_init__isctype() {
load_dll_msvcrt();
_imp___isctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_isctype");
}
void _elfimplib__isctype() {
asm("leave\njmp *%0" : : "r"(_imp___isctype));
}

void _elfimplibmang__isctype() asm("_isctype");
void _elfimplibmang__isctype() {
asm("leave\njmp *%0" : : "r"(_imp___isctype));
}


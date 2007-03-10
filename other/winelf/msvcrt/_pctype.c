#include "msvcrt.h"
void _elfimplib__pctype() asm("pctype");
void *_imp___pctype = NULL;
__attribute__((constructor)) void _elfimplib_init__pctype() {
load_dll_msvcrt();
_imp___pctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pctype");
}
void _elfimplib__pctype() {
asm("leave\njmp *%0" : : "r"(_imp___pctype));
}

void _elfimplibmang__pctype() asm("_pctype");
void _elfimplibmang__pctype() {
asm("leave\njmp *%0" : : "r"(_imp___pctype));
}


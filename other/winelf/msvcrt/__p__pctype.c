#include "msvcrt.h"
void _elfimplib___p__pctype() asm("_p__pctype");
void *_imp____p__pctype = NULL;
__attribute__((constructor)) void _elfimplib_init___p__pctype() {
load_dll_msvcrt();
_imp____p__pctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__pctype");
}
void _elfimplib___p__pctype() {
asm("leave\njmp *%0" : : "r"(_imp____p__pctype));
}


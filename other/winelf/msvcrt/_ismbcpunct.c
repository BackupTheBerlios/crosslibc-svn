#include "msvcrt.h"
void _elfimplib__ismbcpunct() asm("ismbcpunct");
void *_imp___ismbcpunct = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcpunct() {
load_dll_msvcrt();
_imp___ismbcpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcpunct");
}
void _elfimplib__ismbcpunct() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcpunct));
}

void _elfimplibmang__ismbcpunct() asm("_ismbcpunct");
void _elfimplibmang__ismbcpunct() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcpunct));
}


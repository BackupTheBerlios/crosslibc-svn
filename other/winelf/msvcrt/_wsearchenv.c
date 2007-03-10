#include "msvcrt.h"
void _elfimplib__wsearchenv() asm("wsearchenv");
void *_imp___wsearchenv = NULL;
__attribute__((constructor)) void _elfimplib_init__wsearchenv() {
load_dll_msvcrt();
_imp___wsearchenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsearchenv");
}
void _elfimplib__wsearchenv() {
asm("leave\njmp *%0" : : "r"(_imp___wsearchenv));
}

void _elfimplibmang__wsearchenv() asm("_wsearchenv");
void _elfimplibmang__wsearchenv() {
asm("leave\njmp *%0" : : "r"(_imp___wsearchenv));
}


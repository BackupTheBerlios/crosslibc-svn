#include "msvcrt.h"
void _elfimplib___p__tzname() asm("_p__tzname");
void *_imp____p__tzname = NULL;
__attribute__((constructor)) void _elfimplib_init___p__tzname() {
load_dll_msvcrt();
_imp____p__tzname = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__tzname");
}
void _elfimplib___p__tzname() {
asm("leave\njmp *%0" : : "r"(_imp____p__tzname));
}


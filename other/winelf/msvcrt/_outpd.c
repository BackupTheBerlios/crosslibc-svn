#include "msvcrt.h"
void _elfimplib__outpd() asm("outpd");
void *_imp___outpd = NULL;
__attribute__((constructor)) void _elfimplib_init__outpd() {
load_dll_msvcrt();
_imp___outpd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_outpd");
}
void _elfimplib__outpd() {
asm("leave\njmp *%0" : : "r"(_imp___outpd));
}


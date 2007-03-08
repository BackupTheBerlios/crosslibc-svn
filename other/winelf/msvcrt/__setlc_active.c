#include "msvcrt.h"
void _elfimplib___setlc_active() asm("_setlc_active");
void *_imp____setlc_active = NULL;
__attribute__((constructor)) void _elfimplib_init___setlc_active() {
load_dll_msvcrt();
_imp____setlc_active = (void *) _elf_GetProcAddress(_dll_msvcrt, "__setlc_active");
}
void _elfimplib___setlc_active() {
asm("leave\njmp *%0" : : "r"(_imp____setlc_active));
}


#include "msvcrt.h"
void _elfimplib____setlc_active_func() asm("__setlc_active_func");
void *_imp_____setlc_active_func = NULL;
__attribute__((constructor)) void _elfimplib_init____setlc_active_func() {
load_dll_msvcrt();
_imp_____setlc_active_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___setlc_active_func");
}
void _elfimplib____setlc_active_func() {
asm("leave\njmp *%0" : : "r"(_imp_____setlc_active_func));
}


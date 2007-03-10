#include "msvcrt.h"
void _elfimplib___lc_codepage() asm("_lc_codepage");
void *_imp____lc_codepage = NULL;
__attribute__((constructor)) void _elfimplib_init___lc_codepage() {
load_dll_msvcrt();
_imp____lc_codepage = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lc_codepage");
}
void _elfimplib___lc_codepage() {
asm("leave\njmp *%0" : : "r"(_imp____lc_codepage));
}

void _elfimplibmang___lc_codepage() asm("__lc_codepage");
void _elfimplibmang___lc_codepage() {
asm("leave\njmp *%0" : : "r"(_imp____lc_codepage));
}


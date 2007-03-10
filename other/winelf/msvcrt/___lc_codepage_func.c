#include "msvcrt.h"
void _elfimplib____lc_codepage_func() asm("__lc_codepage_func");
void *_imp_____lc_codepage_func = NULL;
__attribute__((constructor)) void _elfimplib_init____lc_codepage_func() {
load_dll_msvcrt();
_imp_____lc_codepage_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___lc_codepage_func");
}
void _elfimplib____lc_codepage_func() {
asm("leave\njmp *%0" : : "r"(_imp_____lc_codepage_func));
}

void _elfimplibmang____lc_codepage_func() asm("___lc_codepage_func");
void _elfimplibmang____lc_codepage_func() {
asm("leave\njmp *%0" : : "r"(_imp_____lc_codepage_func));
}


#include "msvcrt.h"
void _elfimplib___iob_func() asm("_iob_func");
void *_imp____iob_func = NULL;
__attribute__((constructor)) void _elfimplib_init___iob_func() {
load_dll_msvcrt();
_imp____iob_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "__iob_func");
}
void _elfimplib___iob_func() {
asm("leave\njmp *%0" : : "r"(_imp____iob_func));
}


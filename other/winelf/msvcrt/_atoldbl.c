#include "msvcrt.h"
void _elfimplib__atoldbl() asm("atoldbl");
void *_imp___atoldbl = NULL;
__attribute__((constructor)) void _elfimplib_init__atoldbl() {
load_dll_msvcrt();
_imp___atoldbl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_atoldbl");
}
void _elfimplib__atoldbl() {
asm("leave\njmp *%0" : : "r"(_imp___atoldbl));
}


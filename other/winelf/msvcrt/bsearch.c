#include "msvcrt.h"
void _elfimplib_bsearch() asm("bsearch");
void *_imp__bsearch = NULL;
__attribute__((constructor)) void _elfimplib_init_bsearch() {
load_dll_msvcrt();
_imp__bsearch = (void *) _elf_GetProcAddress(_dll_msvcrt, "bsearch");
}
void _elfimplib_bsearch() {
asm("leave\njmp *%0" : : "r"(_imp__bsearch));
}


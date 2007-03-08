#include "msvcrt.h"
void _elfimplib__atodbl() asm("atodbl");
void *_imp___atodbl = NULL;
__attribute__((constructor)) void _elfimplib_init__atodbl() {
load_dll_msvcrt();
_imp___atodbl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_atodbl");
}
void _elfimplib__atodbl() {
asm("leave\njmp *%0" : : "r"(_imp___atodbl));
}


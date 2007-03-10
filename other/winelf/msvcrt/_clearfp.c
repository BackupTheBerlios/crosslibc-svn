#include "msvcrt.h"
void _elfimplib__clearfp() asm("clearfp");
void *_imp___clearfp = NULL;
__attribute__((constructor)) void _elfimplib_init__clearfp() {
load_dll_msvcrt();
_imp___clearfp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_clearfp");
}
void _elfimplib__clearfp() {
asm("leave\njmp *%0" : : "r"(_imp___clearfp));
}

void _elfimplibmang__clearfp() asm("_clearfp");
void _elfimplibmang__clearfp() {
asm("leave\njmp *%0" : : "r"(_imp___clearfp));
}


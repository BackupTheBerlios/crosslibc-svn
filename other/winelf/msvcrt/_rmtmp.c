#include "msvcrt.h"
void _elfimplib__rmtmp() asm("rmtmp");
void *_imp___rmtmp = NULL;
__attribute__((constructor)) void _elfimplib_init__rmtmp() {
load_dll_msvcrt();
_imp___rmtmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rmtmp");
}
void _elfimplib__rmtmp() {
asm("leave\njmp *%0" : : "r"(_imp___rmtmp));
}


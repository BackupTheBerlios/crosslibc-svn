#include "msvcrt.h"
void _elfimplib_clearerr() asm("clearerr");
void *_imp__clearerr = NULL;
__attribute__((constructor)) void _elfimplib_init_clearerr() {
load_dll_msvcrt();
_imp__clearerr = (void *) _elf_GetProcAddress(_dll_msvcrt, "clearerr");
}
void _elfimplib_clearerr() {
asm("leave\njmp *%0" : : "r"(_imp__clearerr));
}


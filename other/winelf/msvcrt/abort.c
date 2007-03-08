#include "msvcrt.h"
void _elfimplib_abort() asm("abort");
void *_imp__abort = NULL;
__attribute__((constructor)) void _elfimplib_init_abort() {
load_dll_msvcrt();
_imp__abort = (void *) _elf_GetProcAddress(_dll_msvcrt, "abort");
}
void _elfimplib_abort() {
asm("leave\njmp *%0" : : "r"(_imp__abort));
}


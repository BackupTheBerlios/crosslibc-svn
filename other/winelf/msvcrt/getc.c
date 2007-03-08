#include "msvcrt.h"
void _elfimplib_getc() asm("getc");
void *_imp__getc = NULL;
__attribute__((constructor)) void _elfimplib_init_getc() {
load_dll_msvcrt();
_imp__getc = (void *) _elf_GetProcAddress(_dll_msvcrt, "getc");
}
void _elfimplib_getc() {
asm("leave\njmp *%0" : : "r"(_imp__getc));
}


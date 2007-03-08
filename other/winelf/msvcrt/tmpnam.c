#include "msvcrt.h"
void _elfimplib_tmpnam() asm("tmpnam");
void *_imp__tmpnam = NULL;
__attribute__((constructor)) void _elfimplib_init_tmpnam() {
load_dll_msvcrt();
_imp__tmpnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "tmpnam");
}
void _elfimplib_tmpnam() {
asm("leave\njmp *%0" : : "r"(_imp__tmpnam));
}


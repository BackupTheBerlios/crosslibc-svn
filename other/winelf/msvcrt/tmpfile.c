#include "msvcrt.h"
void _elfimplib_tmpfile() asm("tmpfile");
void *_imp__tmpfile = NULL;
__attribute__((constructor)) void _elfimplib_init_tmpfile() {
load_dll_msvcrt();
_imp__tmpfile = (void *) _elf_GetProcAddress(_dll_msvcrt, "tmpfile");
}
void _elfimplib_tmpfile() {
asm("leave\njmp *%0" : : "r"(_imp__tmpfile));
}


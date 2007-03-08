#include "msvcrt.h"
void _elfimplib_fsetpos() asm("fsetpos");
void *_imp__fsetpos = NULL;
__attribute__((constructor)) void _elfimplib_init_fsetpos() {
load_dll_msvcrt();
_imp__fsetpos = (void *) _elf_GetProcAddress(_dll_msvcrt, "fsetpos");
}
void _elfimplib_fsetpos() {
asm("leave\njmp *%0" : : "r"(_imp__fsetpos));
}


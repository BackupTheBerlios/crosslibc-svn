#include "msvcrt.h"
void _elfimplib_fread() asm("fread");
void *_imp__fread = NULL;
__attribute__((constructor)) void _elfimplib_init_fread() {
load_dll_msvcrt();
_imp__fread = (void *) _elf_GetProcAddress(_dll_msvcrt, "fread");
}
void _elfimplib_fread() {
asm("leave\njmp *%0" : : "r"(_imp__fread));
}


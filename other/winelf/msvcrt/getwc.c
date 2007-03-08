#include "msvcrt.h"
void _elfimplib_getwc() asm("getwc");
void *_imp__getwc = NULL;
__attribute__((constructor)) void _elfimplib_init_getwc() {
load_dll_msvcrt();
_imp__getwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "getwc");
}
void _elfimplib_getwc() {
asm("leave\njmp *%0" : : "r"(_imp__getwc));
}


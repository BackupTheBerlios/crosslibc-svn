#include "msvcrt.h"
void _elfimplib_mbtowc() asm("mbtowc");
void *_imp__mbtowc = NULL;
__attribute__((constructor)) void _elfimplib_init_mbtowc() {
load_dll_msvcrt();
_imp__mbtowc = (void *) _elf_GetProcAddress(_dll_msvcrt, "mbtowc");
}
void _elfimplib_mbtowc() {
asm("leave\njmp *%0" : : "r"(_imp__mbtowc));
}


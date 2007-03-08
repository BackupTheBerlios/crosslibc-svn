#include "msvcrt.h"
void _elfimplib_getwchar() asm("getwchar");
void *_imp__getwchar = NULL;
__attribute__((constructor)) void _elfimplib_init_getwchar() {
load_dll_msvcrt();
_imp__getwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "getwchar");
}
void _elfimplib_getwchar() {
asm("leave\njmp *%0" : : "r"(_imp__getwchar));
}


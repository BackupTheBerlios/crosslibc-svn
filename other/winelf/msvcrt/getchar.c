#include "msvcrt.h"
void _elfimplib_getchar() asm("getchar");
void *_imp__getchar = NULL;
__attribute__((constructor)) void _elfimplib_init_getchar() {
load_dll_msvcrt();
_imp__getchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "getchar");
}
void _elfimplib_getchar() {
asm("leave\njmp *%0" : : "r"(_imp__getchar));
}


#include "msvcrt.h"
void _elfimplib_iswalpha() asm("iswalpha");
void *_imp__iswalpha = NULL;
__attribute__((constructor)) void _elfimplib_init_iswalpha() {
load_dll_msvcrt();
_imp__iswalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswalpha");
}
void _elfimplib_iswalpha() {
asm("leave\njmp *%0" : : "r"(_imp__iswalpha));
}


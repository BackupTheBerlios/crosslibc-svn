#include "msvcrt.h"
void _elfimplib_iswalnum() asm("iswalnum");
void *_imp__iswalnum = NULL;
__attribute__((constructor)) void _elfimplib_init_iswalnum() {
load_dll_msvcrt();
_imp__iswalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswalnum");
}
void _elfimplib_iswalnum() {
asm("leave\njmp *%0" : : "r"(_imp__iswalnum));
}


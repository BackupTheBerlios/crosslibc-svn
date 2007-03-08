#include "msvcrt.h"
void _elfimplib_strchr() asm("strchr");
void *_imp__strchr = NULL;
__attribute__((constructor)) void _elfimplib_init_strchr() {
load_dll_msvcrt();
_imp__strchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "strchr");
}
void _elfimplib_strchr() {
asm("leave\njmp *%0" : : "r"(_imp__strchr));
}


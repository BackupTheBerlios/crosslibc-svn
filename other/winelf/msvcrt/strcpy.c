#include "msvcrt.h"
void _elfimplib_strcpy() asm("strcpy");
void *_imp__strcpy = NULL;
__attribute__((constructor)) void _elfimplib_init_strcpy() {
load_dll_msvcrt();
_imp__strcpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcpy");
}
void _elfimplib_strcpy() {
asm("leave\njmp *%0" : : "r"(_imp__strcpy));
}


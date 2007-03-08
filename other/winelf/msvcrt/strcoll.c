#include "msvcrt.h"
void _elfimplib_strcoll() asm("strcoll");
void *_imp__strcoll = NULL;
__attribute__((constructor)) void _elfimplib_init_strcoll() {
load_dll_msvcrt();
_imp__strcoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcoll");
}
void _elfimplib_strcoll() {
asm("leave\njmp *%0" : : "r"(_imp__strcoll));
}


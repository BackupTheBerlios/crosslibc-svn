#include "msvcrt.h"
void _elfimplib_sprintf() asm("sprintf");
void *_imp__sprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_sprintf() {
load_dll_msvcrt();
_imp__sprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "sprintf");
}
void _elfimplib_sprintf() {
asm("leave\njmp *%0" : : "r"(_imp__sprintf));
}


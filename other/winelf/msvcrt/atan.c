#include "msvcrt.h"
void _elfimplib_atan() asm("atan");
void *_imp__atan = NULL;
__attribute__((constructor)) void _elfimplib_init_atan() {
load_dll_msvcrt();
_imp__atan = (void *) _elf_GetProcAddress(_dll_msvcrt, "atan");
}
void _elfimplib_atan() {
asm("leave\njmp *%0" : : "r"(_imp__atan));
}


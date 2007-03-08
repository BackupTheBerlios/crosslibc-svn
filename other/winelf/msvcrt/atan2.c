#include "msvcrt.h"
void _elfimplib_atan2() asm("atan2");
void *_imp__atan2 = NULL;
__attribute__((constructor)) void _elfimplib_init_atan2() {
load_dll_msvcrt();
_imp__atan2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "atan2");
}
void _elfimplib_atan2() {
asm("leave\njmp *%0" : : "r"(_imp__atan2));
}


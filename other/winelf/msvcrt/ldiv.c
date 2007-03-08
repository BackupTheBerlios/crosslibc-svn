#include "msvcrt.h"
void _elfimplib_ldiv() asm("ldiv");
void *_imp__ldiv = NULL;
__attribute__((constructor)) void _elfimplib_init_ldiv() {
load_dll_msvcrt();
_imp__ldiv = (void *) _elf_GetProcAddress(_dll_msvcrt, "ldiv");
}
void _elfimplib_ldiv() {
asm("leave\njmp *%0" : : "r"(_imp__ldiv));
}


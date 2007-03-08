#include "msvcrt.h"
void _elfimplib_ldexp() asm("ldexp");
void *_imp__ldexp = NULL;
__attribute__((constructor)) void _elfimplib_init_ldexp() {
load_dll_msvcrt();
_imp__ldexp = (void *) _elf_GetProcAddress(_dll_msvcrt, "ldexp");
}
void _elfimplib_ldexp() {
asm("leave\njmp *%0" : : "r"(_imp__ldexp));
}


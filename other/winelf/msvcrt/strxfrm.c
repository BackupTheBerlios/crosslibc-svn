#include "msvcrt.h"
void _elfimplib_strxfrm() asm("strxfrm");
void *_imp__strxfrm = NULL;
__attribute__((constructor)) void _elfimplib_init_strxfrm() {
load_dll_msvcrt();
_imp__strxfrm = (void *) _elf_GetProcAddress(_dll_msvcrt, "strxfrm");
}
void _elfimplib_strxfrm() {
asm("leave\njmp *%0" : : "r"(_imp__strxfrm));
}


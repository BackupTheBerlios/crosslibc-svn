#include "msvcrt.h"
void _elfimplib_ferror() asm("ferror");
void *_imp__ferror = NULL;
__attribute__((constructor)) void _elfimplib_init_ferror() {
load_dll_msvcrt();
_imp__ferror = (void *) _elf_GetProcAddress(_dll_msvcrt, "ferror");
}
void _elfimplib_ferror() {
asm("leave\njmp *%0" : : "r"(_imp__ferror));
}


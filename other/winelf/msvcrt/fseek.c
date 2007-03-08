#include "msvcrt.h"
void _elfimplib_fseek() asm("fseek");
void *_imp__fseek = NULL;
__attribute__((constructor)) void _elfimplib_init_fseek() {
load_dll_msvcrt();
_imp__fseek = (void *) _elf_GetProcAddress(_dll_msvcrt, "fseek");
}
void _elfimplib_fseek() {
asm("leave\njmp *%0" : : "r"(_imp__fseek));
}


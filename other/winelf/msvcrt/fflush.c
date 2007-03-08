#include "msvcrt.h"
void _elfimplib_fflush() asm("fflush");
void *_imp__fflush = NULL;
__attribute__((constructor)) void _elfimplib_init_fflush() {
load_dll_msvcrt();
_imp__fflush = (void *) _elf_GetProcAddress(_dll_msvcrt, "fflush");
}
void _elfimplib_fflush() {
asm("leave\njmp *%0" : : "r"(_imp__fflush));
}


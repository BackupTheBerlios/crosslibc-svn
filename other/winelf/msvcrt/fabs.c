#include "msvcrt.h"
void _elfimplib_fabs() asm("fabs");
void *_imp__fabs = NULL;
__attribute__((constructor)) void _elfimplib_init_fabs() {
load_dll_msvcrt();
_imp__fabs = (void *) _elf_GetProcAddress(_dll_msvcrt, "fabs");
}
void _elfimplib_fabs() {
asm("leave\njmp *%0" : : "r"(_imp__fabs));
}


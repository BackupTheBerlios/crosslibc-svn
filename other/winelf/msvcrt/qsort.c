#include "msvcrt.h"
void _elfimplib_qsort() asm("qsort");
void *_imp__qsort = NULL;
__attribute__((constructor)) void _elfimplib_init_qsort() {
load_dll_msvcrt();
_imp__qsort = (void *) _elf_GetProcAddress(_dll_msvcrt, "qsort");
}
void _elfimplib_qsort() {
asm("leave\njmp *%0" : : "r"(_imp__qsort));
}


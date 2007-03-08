#include "msvcrt.h"
void _elfimplib_wcstoul() asm("wcstoul");
void *_imp__wcstoul = NULL;
__attribute__((constructor)) void _elfimplib_init_wcstoul() {
load_dll_msvcrt();
_imp__wcstoul = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstoul");
}
void _elfimplib_wcstoul() {
asm("leave\njmp *%0" : : "r"(_imp__wcstoul));
}


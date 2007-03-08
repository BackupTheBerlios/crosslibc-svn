#include "msvcrt.h"
void _elfimplib_wcsspn() asm("wcsspn");
void *_imp__wcsspn = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsspn() {
load_dll_msvcrt();
_imp__wcsspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsspn");
}
void _elfimplib_wcsspn() {
asm("leave\njmp *%0" : : "r"(_imp__wcsspn));
}


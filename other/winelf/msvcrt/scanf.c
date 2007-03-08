#include "msvcrt.h"
void _elfimplib_scanf() asm("scanf");
void *_imp__scanf = NULL;
__attribute__((constructor)) void _elfimplib_init_scanf() {
load_dll_msvcrt();
_imp__scanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "scanf");
}
void _elfimplib_scanf() {
asm("leave\njmp *%0" : : "r"(_imp__scanf));
}


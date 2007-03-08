#include "msvcrt.h"
void _elfimplib_asctime() asm("asctime");
void *_imp__asctime = NULL;
__attribute__((constructor)) void _elfimplib_init_asctime() {
load_dll_msvcrt();
_imp__asctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "asctime");
}
void _elfimplib_asctime() {
asm("leave\njmp *%0" : : "r"(_imp__asctime));
}


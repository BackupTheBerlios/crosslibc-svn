#include "msvcrt.h"
void _elfimplib_time() asm("time");
void *_imp__time = NULL;
__attribute__((constructor)) void _elfimplib_init_time() {
load_dll_msvcrt();
_imp__time = (void *) _elf_GetProcAddress(_dll_msvcrt, "time");
}
void _elfimplib_time() {
asm("leave\njmp *%0" : : "r"(_imp__time));
}


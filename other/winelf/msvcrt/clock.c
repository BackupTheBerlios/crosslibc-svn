#include "msvcrt.h"
void _elfimplib_clock() asm("clock");
void *_imp__clock = NULL;
__attribute__((constructor)) void _elfimplib_init_clock() {
load_dll_msvcrt();
_imp__clock = (void *) _elf_GetProcAddress(_dll_msvcrt, "clock");
}
void _elfimplib_clock() {
asm("leave\njmp *%0" : : "r"(_imp__clock));
}


#include "msvcrt.h"
void _elfimplib__set_SSE2_enable() asm("set_SSE2_enable");
void *_imp___set_SSE2_enable = NULL;
__attribute__((constructor)) void _elfimplib_init__set_SSE2_enable() {
load_dll_msvcrt();
_imp___set_SSE2_enable = (void *) _elf_GetProcAddress(_dll_msvcrt, "_set_SSE2_enable");
}
void _elfimplib__set_SSE2_enable() {
asm("leave\njmp *%0" : : "r"(_imp___set_SSE2_enable));
}

void _elfimplibmang__set_SSE2_enable() asm("_set_SSE2_enable");
void _elfimplibmang__set_SSE2_enable() {
asm("leave\njmp *%0" : : "r"(_imp___set_SSE2_enable));
}


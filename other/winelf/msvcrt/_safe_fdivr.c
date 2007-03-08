#include "msvcrt.h"
void _elfimplib__safe_fdivr() asm("safe_fdivr");
void *_imp___safe_fdivr = NULL;
__attribute__((constructor)) void _elfimplib_init__safe_fdivr() {
load_dll_msvcrt();
_imp___safe_fdivr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fdivr");
}
void _elfimplib__safe_fdivr() {
asm("leave\njmp *%0" : : "r"(_imp___safe_fdivr));
}


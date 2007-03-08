#include "msvcrt.h"
void _elfimplib__wfindfirsti64() asm("wfindfirsti64");
void *_imp___wfindfirsti64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wfindfirsti64() {
load_dll_msvcrt();
_imp___wfindfirsti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindfirsti64");
}
void _elfimplib__wfindfirsti64() {
asm("leave\njmp *%0" : : "r"(_imp___wfindfirsti64));
}


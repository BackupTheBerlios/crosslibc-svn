#include "kernel32.h"
void _elfimplib_GetShortPathNameA() asm("GetShortPathNameA");
void *_imp__GetShortPathNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetShortPathNameA() {
load_dll_kernel32();
_imp__GetShortPathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetShortPathNameA");
}
void _elfimplib_GetShortPathNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetShortPathNameA));
}


#include "kernel32.h"
void _elfimplib_GetShortPathNameW() asm("GetShortPathNameW");
void *_imp__GetShortPathNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetShortPathNameW() {
load_dll_kernel32();
_imp__GetShortPathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetShortPathNameW");
}
void _elfimplib_GetShortPathNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetShortPathNameW));
}


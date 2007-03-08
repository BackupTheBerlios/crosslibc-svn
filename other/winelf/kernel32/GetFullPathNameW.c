#include "kernel32.h"
void _elfimplib_GetFullPathNameW() asm("GetFullPathNameW");
void *_imp__GetFullPathNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFullPathNameW() {
load_dll_kernel32();
_imp__GetFullPathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFullPathNameW");
}
void _elfimplib_GetFullPathNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetFullPathNameW));
}


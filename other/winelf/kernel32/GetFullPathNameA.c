#include "kernel32.h"
void _elfimplib_GetFullPathNameA() asm("GetFullPathNameA");
void *_imp__GetFullPathNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFullPathNameA() {
load_dll_kernel32();
_imp__GetFullPathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFullPathNameA");
}
void _elfimplib_GetFullPathNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetFullPathNameA));
}


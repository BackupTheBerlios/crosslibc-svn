#include "kernel32.h"
void _elfimplib_GetLongPathNameA() asm("GetLongPathNameA");
void *_imp__GetLongPathNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLongPathNameA() {
load_dll_kernel32();
_imp__GetLongPathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLongPathNameA");
}
void _elfimplib_GetLongPathNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetLongPathNameA));
}


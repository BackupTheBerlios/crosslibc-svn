#include "kernel32.h"
void _elfimplib_GetLongPathNameW() asm("GetLongPathNameW");
void *_imp__GetLongPathNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLongPathNameW() {
load_dll_kernel32();
_imp__GetLongPathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLongPathNameW");
}
void _elfimplib_GetLongPathNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetLongPathNameW));
}


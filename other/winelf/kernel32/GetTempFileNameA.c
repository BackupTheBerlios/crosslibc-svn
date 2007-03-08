#include "kernel32.h"
void _elfimplib_GetTempFileNameA() asm("GetTempFileNameA");
void *_imp__GetTempFileNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTempFileNameA() {
load_dll_kernel32();
_imp__GetTempFileNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempFileNameA");
}
void _elfimplib_GetTempFileNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetTempFileNameA));
}


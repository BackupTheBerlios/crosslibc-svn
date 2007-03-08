#include "kernel32.h"
void _elfimplib_GetTempFileNameW() asm("GetTempFileNameW");
void *_imp__GetTempFileNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTempFileNameW() {
load_dll_kernel32();
_imp__GetTempFileNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempFileNameW");
}
void _elfimplib_GetTempFileNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetTempFileNameW));
}


#include "kernel32.h"
void _elfimplib_GetProfileStringA() asm("GetProfileStringA");
void *_imp__GetProfileStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProfileStringA() {
load_dll_kernel32();
_imp__GetProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileStringA");
}
void _elfimplib_GetProfileStringA() {
asm("leave\njmp *%0" : : "r"(_imp__GetProfileStringA));
}


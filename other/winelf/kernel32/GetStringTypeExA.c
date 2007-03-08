#include "kernel32.h"
void _elfimplib_GetStringTypeExA() asm("GetStringTypeExA");
void *_imp__GetStringTypeExA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetStringTypeExA() {
load_dll_kernel32();
_imp__GetStringTypeExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeExA");
}
void _elfimplib_GetStringTypeExA() {
asm("leave\njmp *%0" : : "r"(_imp__GetStringTypeExA));
}


#include "kernel32.h"
void _elfimplib_GetStringTypeA() asm("GetStringTypeA");
void *_imp__GetStringTypeA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetStringTypeA() {
load_dll_kernel32();
_imp__GetStringTypeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeA");
}
void _elfimplib_GetStringTypeA() {
asm("leave\njmp *%0" : : "r"(_imp__GetStringTypeA));
}


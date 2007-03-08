#include "kernel32.h"
void _elfimplib_GetDefaultCommConfigA() asm("GetDefaultCommConfigA");
void *_imp__GetDefaultCommConfigA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDefaultCommConfigA() {
load_dll_kernel32();
_imp__GetDefaultCommConfigA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDefaultCommConfigA");
}
void _elfimplib_GetDefaultCommConfigA() {
asm("leave\njmp *%0" : : "r"(_imp__GetDefaultCommConfigA));
}


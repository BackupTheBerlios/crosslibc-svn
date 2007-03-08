#include "kernel32.h"
void _elfimplib_SetDefaultCommConfigA() asm("SetDefaultCommConfigA");
void *_imp__SetDefaultCommConfigA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetDefaultCommConfigA() {
load_dll_kernel32();
_imp__SetDefaultCommConfigA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDefaultCommConfigA");
}
void _elfimplib_SetDefaultCommConfigA() {
asm("leave\njmp *%0" : : "r"(_imp__SetDefaultCommConfigA));
}


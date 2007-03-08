#include "kernel32.h"
void _elfimplib_SetCPGlobal() asm("SetCPGlobal");
void *_imp__SetCPGlobal = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCPGlobal() {
load_dll_kernel32();
_imp__SetCPGlobal = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCPGlobal");
}
void _elfimplib_SetCPGlobal() {
asm("leave\njmp *%0" : : "r"(_imp__SetCPGlobal));
}


#include "kernel32.h"
void _elfimplib_UpdateResourceA() asm("UpdateResourceA");
void *_imp__UpdateResourceA = NULL;
__attribute__((constructor)) void _elfimplib_init_UpdateResourceA() {
load_dll_kernel32();
_imp__UpdateResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "UpdateResourceA");
}
void _elfimplib_UpdateResourceA() {
asm("leave\njmp *%0" : : "r"(_imp__UpdateResourceA));
}


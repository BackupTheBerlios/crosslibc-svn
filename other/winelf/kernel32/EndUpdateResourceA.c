#include "kernel32.h"
void _elfimplib_EndUpdateResourceA() asm("EndUpdateResourceA");
void *_imp__EndUpdateResourceA = NULL;
__attribute__((constructor)) void _elfimplib_init_EndUpdateResourceA() {
load_dll_kernel32();
_imp__EndUpdateResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "EndUpdateResourceA");
}
void _elfimplib_EndUpdateResourceA() {
asm("leave\njmp *%0" : : "r"(_imp__EndUpdateResourceA));
}


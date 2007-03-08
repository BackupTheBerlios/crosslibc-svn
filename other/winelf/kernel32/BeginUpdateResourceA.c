#include "kernel32.h"
void _elfimplib_BeginUpdateResourceA() asm("BeginUpdateResourceA");
void *_imp__BeginUpdateResourceA = NULL;
__attribute__((constructor)) void _elfimplib_init_BeginUpdateResourceA() {
load_dll_kernel32();
_imp__BeginUpdateResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "BeginUpdateResourceA");
}
void _elfimplib_BeginUpdateResourceA() {
asm("leave\njmp *%0" : : "r"(_imp__BeginUpdateResourceA));
}


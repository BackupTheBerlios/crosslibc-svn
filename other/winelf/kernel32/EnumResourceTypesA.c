#include "kernel32.h"
void _elfimplib_EnumResourceTypesA() asm("EnumResourceTypesA");
void *_imp__EnumResourceTypesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumResourceTypesA() {
load_dll_kernel32();
_imp__EnumResourceTypesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceTypesA");
}
void _elfimplib_EnumResourceTypesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceTypesA));
}


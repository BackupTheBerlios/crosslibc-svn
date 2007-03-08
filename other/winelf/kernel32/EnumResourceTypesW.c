#include "kernel32.h"
void _elfimplib_EnumResourceTypesW() asm("EnumResourceTypesW");
void *_imp__EnumResourceTypesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumResourceTypesW() {
load_dll_kernel32();
_imp__EnumResourceTypesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceTypesW");
}
void _elfimplib_EnumResourceTypesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceTypesW));
}


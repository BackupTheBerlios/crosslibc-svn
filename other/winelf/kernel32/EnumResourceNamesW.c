#include "kernel32.h"
void _elfimplib_EnumResourceNamesW() asm("EnumResourceNamesW");
void *_imp__EnumResourceNamesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumResourceNamesW() {
load_dll_kernel32();
_imp__EnumResourceNamesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceNamesW");
}
void _elfimplib_EnumResourceNamesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceNamesW));
}


#include "kernel32.h"
void _elfimplib_EnumResourceNamesA() asm("EnumResourceNamesA");
void *_imp__EnumResourceNamesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumResourceNamesA() {
load_dll_kernel32();
_imp__EnumResourceNamesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceNamesA");
}
void _elfimplib_EnumResourceNamesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceNamesA));
}


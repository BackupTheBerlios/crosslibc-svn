#include "kernel32.h"
void _elfimplib_EnumTimeFormatsA() asm("EnumTimeFormatsA");
void *_imp__EnumTimeFormatsA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumTimeFormatsA() {
load_dll_kernel32();
_imp__EnumTimeFormatsA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumTimeFormatsA");
}
void _elfimplib_EnumTimeFormatsA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumTimeFormatsA));
}


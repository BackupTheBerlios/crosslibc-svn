#include "kernel32.h"
void _elfimplib_EnumTimeFormatsW() asm("EnumTimeFormatsW");
void *_imp__EnumTimeFormatsW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumTimeFormatsW() {
load_dll_kernel32();
_imp__EnumTimeFormatsW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumTimeFormatsW");
}
void _elfimplib_EnumTimeFormatsW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumTimeFormatsW));
}


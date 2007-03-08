#include "kernel32.h"
void _elfimplib_EnumDateFormatsExA() asm("EnumDateFormatsExA");
void *_imp__EnumDateFormatsExA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDateFormatsExA() {
load_dll_kernel32();
_imp__EnumDateFormatsExA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumDateFormatsExA");
}
void _elfimplib_EnumDateFormatsExA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDateFormatsExA));
}


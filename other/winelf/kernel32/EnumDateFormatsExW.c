#include "kernel32.h"
void _elfimplib_EnumDateFormatsExW() asm("EnumDateFormatsExW");
void *_imp__EnumDateFormatsExW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDateFormatsExW() {
load_dll_kernel32();
_imp__EnumDateFormatsExW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumDateFormatsExW");
}
void _elfimplib_EnumDateFormatsExW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDateFormatsExW));
}


#include "kernel32.h"
void _elfimplib_EnumDateFormatsW() asm("EnumDateFormatsW");
void *_imp__EnumDateFormatsW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDateFormatsW() {
load_dll_kernel32();
_imp__EnumDateFormatsW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumDateFormatsW");
}
void _elfimplib_EnumDateFormatsW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDateFormatsW));
}


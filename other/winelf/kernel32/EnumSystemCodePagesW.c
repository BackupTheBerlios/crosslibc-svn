#include "kernel32.h"
void _elfimplib_EnumSystemCodePagesW() asm("EnumSystemCodePagesW");
void *_imp__EnumSystemCodePagesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumSystemCodePagesW() {
load_dll_kernel32();
_imp__EnumSystemCodePagesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemCodePagesW");
}
void _elfimplib_EnumSystemCodePagesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemCodePagesW));
}


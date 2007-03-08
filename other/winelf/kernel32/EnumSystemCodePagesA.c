#include "kernel32.h"
void _elfimplib_EnumSystemCodePagesA() asm("EnumSystemCodePagesA");
void *_imp__EnumSystemCodePagesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumSystemCodePagesA() {
load_dll_kernel32();
_imp__EnumSystemCodePagesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemCodePagesA");
}
void _elfimplib_EnumSystemCodePagesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemCodePagesA));
}


#include "kernel32.h"
void _elfimplib_FormatMessageA() asm("FormatMessageA");
void *_imp__FormatMessageA = NULL;
__attribute__((constructor)) void _elfimplib_init_FormatMessageA() {
load_dll_kernel32();
_imp__FormatMessageA = (void *) _elf_GetProcAddress(_dll_kernel32, "FormatMessageA");
}
void _elfimplib_FormatMessageA() {
asm("leave\njmp *%0" : : "r"(_imp__FormatMessageA));
}


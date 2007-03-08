#include "kernel32.h"
void _elfimplib_FormatMessageW() asm("FormatMessageW");
void *_imp__FormatMessageW = NULL;
__attribute__((constructor)) void _elfimplib_init_FormatMessageW() {
load_dll_kernel32();
_imp__FormatMessageW = (void *) _elf_GetProcAddress(_dll_kernel32, "FormatMessageW");
}
void _elfimplib_FormatMessageW() {
asm("leave\njmp *%0" : : "r"(_imp__FormatMessageW));
}


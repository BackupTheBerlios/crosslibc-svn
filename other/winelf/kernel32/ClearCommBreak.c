#include "kernel32.h"
void _elfimplib_ClearCommBreak() asm("ClearCommBreak");
void *_imp__ClearCommBreak = NULL;
__attribute__((constructor)) void _elfimplib_init_ClearCommBreak() {
load_dll_kernel32();
_imp__ClearCommBreak = (void *) _elf_GetProcAddress(_dll_kernel32, "ClearCommBreak");
}
void _elfimplib_ClearCommBreak() {
asm("leave\njmp *%0" : : "r"(_imp__ClearCommBreak));
}


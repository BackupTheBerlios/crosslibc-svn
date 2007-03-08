#include "kernel32.h"
void _elfimplib_SetCommBreak() asm("SetCommBreak");
void *_imp__SetCommBreak = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCommBreak() {
load_dll_kernel32();
_imp__SetCommBreak = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommBreak");
}
void _elfimplib_SetCommBreak() {
asm("leave\njmp *%0" : : "r"(_imp__SetCommBreak));
}


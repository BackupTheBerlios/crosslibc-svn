#include "kernel32.h"
void _elfimplib_SetStdHandle() asm("SetStdHandle");
void *_imp__SetStdHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_SetStdHandle() {
load_dll_kernel32();
_imp__SetStdHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "SetStdHandle");
}
void _elfimplib_SetStdHandle() {
asm("leave\njmp *%0" : : "r"(_imp__SetStdHandle));
}


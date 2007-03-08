#include "kernel32.h"
void _elfimplib_WriteConsoleA() asm("WriteConsoleA");
void *_imp__WriteConsoleA = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleA() {
load_dll_kernel32();
_imp__WriteConsoleA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleA");
}
void _elfimplib_WriteConsoleA() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleA));
}


#include "kernel32.h"
void _elfimplib_WriteConsoleInputA() asm("WriteConsoleInputA");
void *_imp__WriteConsoleInputA = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleInputA() {
load_dll_kernel32();
_imp__WriteConsoleInputA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputA");
}
void _elfimplib_WriteConsoleInputA() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleInputA));
}


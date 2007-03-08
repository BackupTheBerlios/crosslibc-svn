#include "kernel32.h"
void _elfimplib_WriteConsoleOutputA() asm("WriteConsoleOutputA");
void *_imp__WriteConsoleOutputA = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleOutputA() {
load_dll_kernel32();
_imp__WriteConsoleOutputA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputA");
}
void _elfimplib_WriteConsoleOutputA() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleOutputA));
}


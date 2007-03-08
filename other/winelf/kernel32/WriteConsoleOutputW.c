#include "kernel32.h"
void _elfimplib_WriteConsoleOutputW() asm("WriteConsoleOutputW");
void *_imp__WriteConsoleOutputW = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleOutputW() {
load_dll_kernel32();
_imp__WriteConsoleOutputW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputW");
}
void _elfimplib_WriteConsoleOutputW() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleOutputW));
}


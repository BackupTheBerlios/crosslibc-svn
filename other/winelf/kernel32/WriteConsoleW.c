#include "kernel32.h"
void _elfimplib_WriteConsoleW() asm("WriteConsoleW");
void *_imp__WriteConsoleW = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleW() {
load_dll_kernel32();
_imp__WriteConsoleW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleW");
}
void _elfimplib_WriteConsoleW() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleW));
}


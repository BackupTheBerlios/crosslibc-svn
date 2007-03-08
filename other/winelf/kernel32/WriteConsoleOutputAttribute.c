#include "kernel32.h"
void _elfimplib_WriteConsoleOutputAttribute() asm("WriteConsoleOutputAttribute");
void *_imp__WriteConsoleOutputAttribute = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleOutputAttribute() {
load_dll_kernel32();
_imp__WriteConsoleOutputAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputAttribute");
}
void _elfimplib_WriteConsoleOutputAttribute() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleOutputAttribute));
}


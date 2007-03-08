#include "kernel32.h"
void _elfimplib_WriteConsoleInputVDMA() asm("WriteConsoleInputVDMA");
void *_imp__WriteConsoleInputVDMA = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleInputVDMA() {
load_dll_kernel32();
_imp__WriteConsoleInputVDMA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputVDMA");
}
void _elfimplib_WriteConsoleInputVDMA() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleInputVDMA));
}


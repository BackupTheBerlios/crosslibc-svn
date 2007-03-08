#include "kernel32.h"
void _elfimplib_FlushConsoleInputBuffer() asm("FlushConsoleInputBuffer");
void *_imp__FlushConsoleInputBuffer = NULL;
__attribute__((constructor)) void _elfimplib_init_FlushConsoleInputBuffer() {
load_dll_kernel32();
_imp__FlushConsoleInputBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushConsoleInputBuffer");
}
void _elfimplib_FlushConsoleInputBuffer() {
asm("leave\njmp *%0" : : "r"(_imp__FlushConsoleInputBuffer));
}


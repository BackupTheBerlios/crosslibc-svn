#include "kernel32.h"
void _elfimplib_SetConsoleActiveScreenBuffer() asm("SetConsoleActiveScreenBuffer");
void *_imp__SetConsoleActiveScreenBuffer = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleActiveScreenBuffer() {
load_dll_kernel32();
_imp__SetConsoleActiveScreenBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleActiveScreenBuffer");
}
void _elfimplib_SetConsoleActiveScreenBuffer() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleActiveScreenBuffer));
}


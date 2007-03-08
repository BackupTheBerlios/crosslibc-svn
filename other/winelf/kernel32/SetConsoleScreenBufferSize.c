#include "kernel32.h"
void _elfimplib_SetConsoleScreenBufferSize() asm("SetConsoleScreenBufferSize");
void *_imp__SetConsoleScreenBufferSize = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleScreenBufferSize() {
load_dll_kernel32();
_imp__SetConsoleScreenBufferSize = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleScreenBufferSize");
}
void _elfimplib_SetConsoleScreenBufferSize() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleScreenBufferSize));
}


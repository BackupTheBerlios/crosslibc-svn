#include "kernel32.h"
void _elfimplib_SetConsoleMaximumWindowSize() asm("SetConsoleMaximumWindowSize");
void *_imp__SetConsoleMaximumWindowSize = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleMaximumWindowSize() {
load_dll_kernel32();
_imp__SetConsoleMaximumWindowSize = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleMaximumWindowSize");
}
void _elfimplib_SetConsoleMaximumWindowSize() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleMaximumWindowSize));
}


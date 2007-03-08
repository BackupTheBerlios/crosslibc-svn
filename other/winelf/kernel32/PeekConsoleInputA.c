#include "kernel32.h"
void _elfimplib_PeekConsoleInputA() asm("PeekConsoleInputA");
void *_imp__PeekConsoleInputA = NULL;
__attribute__((constructor)) void _elfimplib_init_PeekConsoleInputA() {
load_dll_kernel32();
_imp__PeekConsoleInputA = (void *) _elf_GetProcAddress(_dll_kernel32, "PeekConsoleInputA");
}
void _elfimplib_PeekConsoleInputA() {
asm("leave\njmp *%0" : : "r"(_imp__PeekConsoleInputA));
}


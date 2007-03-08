#include "kernel32.h"
void _elfimplib_CreateConsoleScreenBuffer() asm("CreateConsoleScreenBuffer");
void *_imp__CreateConsoleScreenBuffer = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateConsoleScreenBuffer() {
load_dll_kernel32();
_imp__CreateConsoleScreenBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateConsoleScreenBuffer");
}
void _elfimplib_CreateConsoleScreenBuffer() {
asm("leave\njmp *%0" : : "r"(_imp__CreateConsoleScreenBuffer));
}


#include "kernel32.h"
void _elfimplib_SetConsoleMode() asm("SetConsoleMode");
void *_imp__SetConsoleMode = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleMode() {
load_dll_kernel32();
_imp__SetConsoleMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleMode");
}
void _elfimplib_SetConsoleMode() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleMode));
}


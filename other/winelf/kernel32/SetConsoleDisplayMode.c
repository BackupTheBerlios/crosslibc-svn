#include "kernel32.h"
void _elfimplib_SetConsoleDisplayMode() asm("SetConsoleDisplayMode");
void *_imp__SetConsoleDisplayMode = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleDisplayMode() {
load_dll_kernel32();
_imp__SetConsoleDisplayMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleDisplayMode");
}
void _elfimplib_SetConsoleDisplayMode() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleDisplayMode));
}


#include "kernel32.h"
void _elfimplib_SetConsoleMenuClose() asm("SetConsoleMenuClose");
void *_imp__SetConsoleMenuClose = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleMenuClose() {
load_dll_kernel32();
_imp__SetConsoleMenuClose = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleMenuClose");
}
void _elfimplib_SetConsoleMenuClose() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleMenuClose));
}


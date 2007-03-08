#include "kernel32.h"
void _elfimplib_SetConsoleFont() asm("SetConsoleFont");
void *_imp__SetConsoleFont = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleFont() {
load_dll_kernel32();
_imp__SetConsoleFont = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleFont");
}
void _elfimplib_SetConsoleFont() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleFont));
}


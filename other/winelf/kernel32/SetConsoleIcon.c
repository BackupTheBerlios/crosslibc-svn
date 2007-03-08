#include "kernel32.h"
void _elfimplib_SetConsoleIcon() asm("SetConsoleIcon");
void *_imp__SetConsoleIcon = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleIcon() {
load_dll_kernel32();
_imp__SetConsoleIcon = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleIcon");
}
void _elfimplib_SetConsoleIcon() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleIcon));
}


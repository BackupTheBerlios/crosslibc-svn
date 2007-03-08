#include "kernel32.h"
void _elfimplib_SetConsoleKeyShortcuts() asm("SetConsoleKeyShortcuts");
void *_imp__SetConsoleKeyShortcuts = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleKeyShortcuts() {
load_dll_kernel32();
_imp__SetConsoleKeyShortcuts = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleKeyShortcuts");
}
void _elfimplib_SetConsoleKeyShortcuts() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleKeyShortcuts));
}


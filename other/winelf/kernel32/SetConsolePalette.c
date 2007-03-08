#include "kernel32.h"
void _elfimplib_SetConsolePalette() asm("SetConsolePalette");
void *_imp__SetConsolePalette = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsolePalette() {
load_dll_kernel32();
_imp__SetConsolePalette = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsolePalette");
}
void _elfimplib_SetConsolePalette() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsolePalette));
}


#include "kernel32.h"
void _elfimplib_SetConsoleOS2OemFormat() asm("SetConsoleOS2OemFormat");
void *_imp__SetConsoleOS2OemFormat = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleOS2OemFormat() {
load_dll_kernel32();
_imp__SetConsoleOS2OemFormat = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleOS2OemFormat");
}
void _elfimplib_SetConsoleOS2OemFormat() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleOS2OemFormat));
}


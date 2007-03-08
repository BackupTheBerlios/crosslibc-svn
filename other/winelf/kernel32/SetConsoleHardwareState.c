#include "kernel32.h"
void _elfimplib_SetConsoleHardwareState() asm("SetConsoleHardwareState");
void *_imp__SetConsoleHardwareState = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleHardwareState() {
load_dll_kernel32();
_imp__SetConsoleHardwareState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleHardwareState");
}
void _elfimplib_SetConsoleHardwareState() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleHardwareState));
}


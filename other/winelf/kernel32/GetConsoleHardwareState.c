#include "kernel32.h"
void _elfimplib_GetConsoleHardwareState() asm("GetConsoleHardwareState");
void *_imp__GetConsoleHardwareState = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleHardwareState() {
load_dll_kernel32();
_imp__GetConsoleHardwareState = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleHardwareState");
}
void _elfimplib_GetConsoleHardwareState() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleHardwareState));
}


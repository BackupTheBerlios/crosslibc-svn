#include "kernel32.h"
void _elfimplib_SetSystemPowerState() asm("SetSystemPowerState");
void *_imp__SetSystemPowerState = NULL;
__attribute__((constructor)) void _elfimplib_init_SetSystemPowerState() {
load_dll_kernel32();
_imp__SetSystemPowerState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetSystemPowerState");
}
void _elfimplib_SetSystemPowerState() {
asm("leave\njmp *%0" : : "r"(_imp__SetSystemPowerState));
}


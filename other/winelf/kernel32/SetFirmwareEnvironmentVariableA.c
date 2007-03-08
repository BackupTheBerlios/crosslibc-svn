#include "kernel32.h"
void _elfimplib_SetFirmwareEnvironmentVariableA() asm("SetFirmwareEnvironmentVariableA");
void *_imp__SetFirmwareEnvironmentVariableA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFirmwareEnvironmentVariableA() {
load_dll_kernel32();
_imp__SetFirmwareEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFirmwareEnvironmentVariableA");
}
void _elfimplib_SetFirmwareEnvironmentVariableA() {
asm("leave\njmp *%0" : : "r"(_imp__SetFirmwareEnvironmentVariableA));
}


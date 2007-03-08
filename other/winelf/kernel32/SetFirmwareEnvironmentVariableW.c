#include "kernel32.h"
void _elfimplib_SetFirmwareEnvironmentVariableW() asm("SetFirmwareEnvironmentVariableW");
void *_imp__SetFirmwareEnvironmentVariableW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFirmwareEnvironmentVariableW() {
load_dll_kernel32();
_imp__SetFirmwareEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFirmwareEnvironmentVariableW");
}
void _elfimplib_SetFirmwareEnvironmentVariableW() {
asm("leave\njmp *%0" : : "r"(_imp__SetFirmwareEnvironmentVariableW));
}


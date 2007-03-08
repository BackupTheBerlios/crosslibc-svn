#include "kernel32.h"
void _elfimplib_GetFirmwareEnvironmentVariableA() asm("GetFirmwareEnvironmentVariableA");
void *_imp__GetFirmwareEnvironmentVariableA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFirmwareEnvironmentVariableA() {
load_dll_kernel32();
_imp__GetFirmwareEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFirmwareEnvironmentVariableA");
}
void _elfimplib_GetFirmwareEnvironmentVariableA() {
asm("leave\njmp *%0" : : "r"(_imp__GetFirmwareEnvironmentVariableA));
}


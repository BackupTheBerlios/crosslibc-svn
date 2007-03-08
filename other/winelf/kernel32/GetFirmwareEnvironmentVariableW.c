#include "kernel32.h"
void _elfimplib_GetFirmwareEnvironmentVariableW() asm("GetFirmwareEnvironmentVariableW");
void *_imp__GetFirmwareEnvironmentVariableW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFirmwareEnvironmentVariableW() {
load_dll_kernel32();
_imp__GetFirmwareEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFirmwareEnvironmentVariableW");
}
void _elfimplib_GetFirmwareEnvironmentVariableW() {
asm("leave\njmp *%0" : : "r"(_imp__GetFirmwareEnvironmentVariableW));
}


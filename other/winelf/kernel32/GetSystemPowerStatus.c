#include "kernel32.h"
void _elfimplib_GetSystemPowerStatus() asm("GetSystemPowerStatus");
void *_imp__GetSystemPowerStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemPowerStatus() {
load_dll_kernel32();
_imp__GetSystemPowerStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemPowerStatus");
}
void _elfimplib_GetSystemPowerStatus() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemPowerStatus));
}


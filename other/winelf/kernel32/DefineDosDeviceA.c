#include "kernel32.h"
void _elfimplib_DefineDosDeviceA() asm("DefineDosDeviceA");
void *_imp__DefineDosDeviceA = NULL;
__attribute__((constructor)) void _elfimplib_init_DefineDosDeviceA() {
load_dll_kernel32();
_imp__DefineDosDeviceA = (void *) _elf_GetProcAddress(_dll_kernel32, "DefineDosDeviceA");
}
void _elfimplib_DefineDosDeviceA() {
asm("leave\njmp *%0" : : "r"(_imp__DefineDosDeviceA));
}


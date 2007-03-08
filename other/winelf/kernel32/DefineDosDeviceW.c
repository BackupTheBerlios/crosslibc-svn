#include "kernel32.h"
void _elfimplib_DefineDosDeviceW() asm("DefineDosDeviceW");
void *_imp__DefineDosDeviceW = NULL;
__attribute__((constructor)) void _elfimplib_init_DefineDosDeviceW() {
load_dll_kernel32();
_imp__DefineDosDeviceW = (void *) _elf_GetProcAddress(_dll_kernel32, "DefineDosDeviceW");
}
void _elfimplib_DefineDosDeviceW() {
asm("leave\njmp *%0" : : "r"(_imp__DefineDosDeviceW));
}


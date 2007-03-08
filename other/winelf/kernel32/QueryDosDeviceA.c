#include "kernel32.h"
void _elfimplib_QueryDosDeviceA() asm("QueryDosDeviceA");
void *_imp__QueryDosDeviceA = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryDosDeviceA() {
load_dll_kernel32();
_imp__QueryDosDeviceA = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryDosDeviceA");
}
void _elfimplib_QueryDosDeviceA() {
asm("leave\njmp *%0" : : "r"(_imp__QueryDosDeviceA));
}


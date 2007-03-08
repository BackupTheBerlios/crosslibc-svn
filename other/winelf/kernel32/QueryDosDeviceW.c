#include "kernel32.h"
void _elfimplib_QueryDosDeviceW() asm("QueryDosDeviceW");
void *_imp__QueryDosDeviceW = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryDosDeviceW() {
load_dll_kernel32();
_imp__QueryDosDeviceW = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryDosDeviceW");
}
void _elfimplib_QueryDosDeviceW() {
asm("leave\njmp *%0" : : "r"(_imp__QueryDosDeviceW));
}


#include "kernel32.h"
void _elfimplib_GetCommModemStatus() asm("GetCommModemStatus");
void *_imp__GetCommModemStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCommModemStatus() {
load_dll_kernel32();
_imp__GetCommModemStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommModemStatus");
}
void _elfimplib_GetCommModemStatus() {
asm("leave\njmp *%0" : : "r"(_imp__GetCommModemStatus));
}


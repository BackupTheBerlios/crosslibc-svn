#include "kernel32.h"
void _elfimplib_GetProcAddress() asm("GetProcAddress");
void *_imp__GetProcAddress = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcAddress() {
load_dll_kernel32();
_imp__GetProcAddress = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcAddress");
}
void _elfimplib_GetProcAddress() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcAddress));
}


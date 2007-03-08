#include "kernel32.h"
void _elfimplib_GetSystemInfo() asm("GetSystemInfo");
void *_imp__GetSystemInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemInfo() {
load_dll_kernel32();
_imp__GetSystemInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemInfo");
}
void _elfimplib_GetSystemInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemInfo));
}


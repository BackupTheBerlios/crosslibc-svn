#include "kernel32.h"
void _elfimplib_GetNativeSystemInfo() asm("GetNativeSystemInfo");
void *_imp__GetNativeSystemInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNativeSystemInfo() {
load_dll_kernel32();
_imp__GetNativeSystemInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNativeSystemInfo");
}
void _elfimplib_GetNativeSystemInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetNativeSystemInfo));
}


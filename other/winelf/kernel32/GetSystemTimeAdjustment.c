#include "kernel32.h"
void _elfimplib_GetSystemTimeAdjustment() asm("GetSystemTimeAdjustment");
void *_imp__GetSystemTimeAdjustment = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemTimeAdjustment() {
load_dll_kernel32();
_imp__GetSystemTimeAdjustment = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemTimeAdjustment");
}
void _elfimplib_GetSystemTimeAdjustment() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemTimeAdjustment));
}


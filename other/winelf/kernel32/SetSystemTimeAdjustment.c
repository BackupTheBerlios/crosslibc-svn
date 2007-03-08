#include "kernel32.h"
void _elfimplib_SetSystemTimeAdjustment() asm("SetSystemTimeAdjustment");
void *_imp__SetSystemTimeAdjustment = NULL;
__attribute__((constructor)) void _elfimplib_init_SetSystemTimeAdjustment() {
load_dll_kernel32();
_imp__SetSystemTimeAdjustment = (void *) _elf_GetProcAddress(_dll_kernel32, "SetSystemTimeAdjustment");
}
void _elfimplib_SetSystemTimeAdjustment() {
asm("leave\njmp *%0" : : "r"(_imp__SetSystemTimeAdjustment));
}


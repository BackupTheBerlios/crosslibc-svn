#include "kernel32.h"
void _elfimplib_SetCommState() asm("SetCommState");
void *_imp__SetCommState = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCommState() {
load_dll_kernel32();
_imp__SetCommState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommState");
}
void _elfimplib_SetCommState() {
asm("leave\njmp *%0" : : "r"(_imp__SetCommState));
}


#include "kernel32.h"
void _elfimplib_SetCommMask() asm("SetCommMask");
void *_imp__SetCommMask = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCommMask() {
load_dll_kernel32();
_imp__SetCommMask = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommMask");
}
void _elfimplib_SetCommMask() {
asm("leave\njmp *%0" : : "r"(_imp__SetCommMask));
}


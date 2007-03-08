#include "kernel32.h"
void _elfimplib_SetFileValidData() asm("SetFileValidData");
void *_imp__SetFileValidData = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileValidData() {
load_dll_kernel32();
_imp__SetFileValidData = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileValidData");
}
void _elfimplib_SetFileValidData() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileValidData));
}


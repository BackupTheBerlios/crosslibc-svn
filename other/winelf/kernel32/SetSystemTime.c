#include "kernel32.h"
void _elfimplib_SetSystemTime() asm("SetSystemTime");
void *_imp__SetSystemTime = NULL;
__attribute__((constructor)) void _elfimplib_init_SetSystemTime() {
load_dll_kernel32();
_imp__SetSystemTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SetSystemTime");
}
void _elfimplib_SetSystemTime() {
asm("leave\njmp *%0" : : "r"(_imp__SetSystemTime));
}


#include "kernel32.h"
void _elfimplib_SetLocalTime() asm("SetLocalTime");
void *_imp__SetLocalTime = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLocalTime() {
load_dll_kernel32();
_imp__SetLocalTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocalTime");
}
void _elfimplib_SetLocalTime() {
asm("leave\njmp *%0" : : "r"(_imp__SetLocalTime));
}


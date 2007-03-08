#include "kernel32.h"
void _elfimplib_SetCommConfig() asm("SetCommConfig");
void *_imp__SetCommConfig = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCommConfig() {
load_dll_kernel32();
_imp__SetCommConfig = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommConfig");
}
void _elfimplib_SetCommConfig() {
asm("leave\njmp *%0" : : "r"(_imp__SetCommConfig));
}


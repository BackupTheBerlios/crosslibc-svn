#include "kernel32.h"
void _elfimplib_SetDefaultCommConfigW() asm("SetDefaultCommConfigW");
void *_imp__SetDefaultCommConfigW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetDefaultCommConfigW() {
load_dll_kernel32();
_imp__SetDefaultCommConfigW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDefaultCommConfigW");
}
void _elfimplib_SetDefaultCommConfigW() {
asm("leave\njmp *%0" : : "r"(_imp__SetDefaultCommConfigW));
}


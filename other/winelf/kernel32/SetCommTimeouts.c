#include "kernel32.h"
void _elfimplib_SetCommTimeouts() asm("SetCommTimeouts");
void *_imp__SetCommTimeouts = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCommTimeouts() {
load_dll_kernel32();
_imp__SetCommTimeouts = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommTimeouts");
}
void _elfimplib_SetCommTimeouts() {
asm("leave\njmp *%0" : : "r"(_imp__SetCommTimeouts));
}


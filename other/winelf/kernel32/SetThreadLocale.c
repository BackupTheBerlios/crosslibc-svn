#include "kernel32.h"
void _elfimplib_SetThreadLocale() asm("SetThreadLocale");
void *_imp__SetThreadLocale = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadLocale() {
load_dll_kernel32();
_imp__SetThreadLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadLocale");
}
void _elfimplib_SetThreadLocale() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadLocale));
}


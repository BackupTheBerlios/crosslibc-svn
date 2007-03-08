#include "kernel32.h"
void _elfimplib_SetLocaleInfoA() asm("SetLocaleInfoA");
void *_imp__SetLocaleInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLocaleInfoA() {
load_dll_kernel32();
_imp__SetLocaleInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocaleInfoA");
}
void _elfimplib_SetLocaleInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__SetLocaleInfoA));
}


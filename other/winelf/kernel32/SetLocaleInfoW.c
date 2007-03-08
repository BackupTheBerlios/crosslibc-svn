#include "kernel32.h"
void _elfimplib_SetLocaleInfoW() asm("SetLocaleInfoW");
void *_imp__SetLocaleInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLocaleInfoW() {
load_dll_kernel32();
_imp__SetLocaleInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocaleInfoW");
}
void _elfimplib_SetLocaleInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__SetLocaleInfoW));
}


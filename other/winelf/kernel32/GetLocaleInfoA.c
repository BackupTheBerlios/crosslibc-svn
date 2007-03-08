#include "kernel32.h"
void _elfimplib_GetLocaleInfoA() asm("GetLocaleInfoA");
void *_imp__GetLocaleInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLocaleInfoA() {
load_dll_kernel32();
_imp__GetLocaleInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLocaleInfoA");
}
void _elfimplib_GetLocaleInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__GetLocaleInfoA));
}


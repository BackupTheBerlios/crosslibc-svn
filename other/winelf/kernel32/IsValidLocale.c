#include "kernel32.h"
void _elfimplib_IsValidLocale() asm("IsValidLocale");
void *_imp__IsValidLocale = NULL;
__attribute__((constructor)) void _elfimplib_init_IsValidLocale() {
load_dll_kernel32();
_imp__IsValidLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidLocale");
}
void _elfimplib_IsValidLocale() {
asm("leave\njmp *%0" : : "r"(_imp__IsValidLocale));
}


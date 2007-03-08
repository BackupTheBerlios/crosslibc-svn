#include "kernel32.h"
void _elfimplib_ValidateLocale() asm("ValidateLocale");
void *_imp__ValidateLocale = NULL;
__attribute__((constructor)) void _elfimplib_init_ValidateLocale() {
load_dll_kernel32();
_imp__ValidateLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "ValidateLocale");
}
void _elfimplib_ValidateLocale() {
asm("leave\njmp *%0" : : "r"(_imp__ValidateLocale));
}


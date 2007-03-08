#include "kernel32.h"
void _elfimplib_IsValidLanguageGroup() asm("IsValidLanguageGroup");
void *_imp__IsValidLanguageGroup = NULL;
__attribute__((constructor)) void _elfimplib_init_IsValidLanguageGroup() {
load_dll_kernel32();
_imp__IsValidLanguageGroup = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidLanguageGroup");
}
void _elfimplib_IsValidLanguageGroup() {
asm("leave\njmp *%0" : : "r"(_imp__IsValidLanguageGroup));
}


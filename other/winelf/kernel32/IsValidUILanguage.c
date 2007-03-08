#include "kernel32.h"
void _elfimplib_IsValidUILanguage() asm("IsValidUILanguage");
void *_imp__IsValidUILanguage = NULL;
__attribute__((constructor)) void _elfimplib_init_IsValidUILanguage() {
load_dll_kernel32();
_imp__IsValidUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidUILanguage");
}
void _elfimplib_IsValidUILanguage() {
asm("leave\njmp *%0" : : "r"(_imp__IsValidUILanguage));
}


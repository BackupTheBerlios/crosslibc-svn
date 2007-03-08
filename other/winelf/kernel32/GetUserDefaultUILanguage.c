#include "kernel32.h"
void _elfimplib_GetUserDefaultUILanguage() asm("GetUserDefaultUILanguage");
void *_imp__GetUserDefaultUILanguage = NULL;
__attribute__((constructor)) void _elfimplib_init_GetUserDefaultUILanguage() {
load_dll_kernel32();
_imp__GetUserDefaultUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserDefaultUILanguage");
}
void _elfimplib_GetUserDefaultUILanguage() {
asm("leave\njmp *%0" : : "r"(_imp__GetUserDefaultUILanguage));
}


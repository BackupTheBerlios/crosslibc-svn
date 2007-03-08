#include "kernel32.h"
void _elfimplib_SetThreadUILanguage() asm("SetThreadUILanguage");
void *_imp__SetThreadUILanguage = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadUILanguage() {
load_dll_kernel32();
_imp__SetThreadUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadUILanguage");
}
void _elfimplib_SetThreadUILanguage() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadUILanguage));
}


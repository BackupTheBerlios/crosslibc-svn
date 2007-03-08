#include "kernel32.h"
void _elfimplib_GetSystemDefaultUILanguage() asm("GetSystemDefaultUILanguage");
void *_imp__GetSystemDefaultUILanguage = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemDefaultUILanguage() {
load_dll_kernel32();
_imp__GetSystemDefaultUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDefaultUILanguage");
}
void _elfimplib_GetSystemDefaultUILanguage() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemDefaultUILanguage));
}


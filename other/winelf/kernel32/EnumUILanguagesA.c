#include "kernel32.h"
void _elfimplib_EnumUILanguagesA() asm("EnumUILanguagesA");
void *_imp__EnumUILanguagesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumUILanguagesA() {
load_dll_kernel32();
_imp__EnumUILanguagesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumUILanguagesA");
}
void _elfimplib_EnumUILanguagesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumUILanguagesA));
}


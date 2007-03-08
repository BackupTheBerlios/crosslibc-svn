#include "kernel32.h"
void _elfimplib_EnumUILanguagesW() asm("EnumUILanguagesW");
void *_imp__EnumUILanguagesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumUILanguagesW() {
load_dll_kernel32();
_imp__EnumUILanguagesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumUILanguagesW");
}
void _elfimplib_EnumUILanguagesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumUILanguagesW));
}


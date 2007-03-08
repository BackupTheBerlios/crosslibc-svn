#include "kernel32.h"
void _elfimplib_EnumResourceLanguagesA() asm("EnumResourceLanguagesA");
void *_imp__EnumResourceLanguagesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumResourceLanguagesA() {
load_dll_kernel32();
_imp__EnumResourceLanguagesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceLanguagesA");
}
void _elfimplib_EnumResourceLanguagesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceLanguagesA));
}


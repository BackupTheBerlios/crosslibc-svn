#include "kernel32.h"
void _elfimplib_EnumResourceLanguagesW() asm("EnumResourceLanguagesW");
void *_imp__EnumResourceLanguagesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumResourceLanguagesW() {
load_dll_kernel32();
_imp__EnumResourceLanguagesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceLanguagesW");
}
void _elfimplib_EnumResourceLanguagesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceLanguagesW));
}


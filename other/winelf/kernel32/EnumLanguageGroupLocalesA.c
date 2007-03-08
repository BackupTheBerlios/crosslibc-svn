#include "kernel32.h"
void _elfimplib_EnumLanguageGroupLocalesA() asm("EnumLanguageGroupLocalesA");
void *_imp__EnumLanguageGroupLocalesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumLanguageGroupLocalesA() {
load_dll_kernel32();
_imp__EnumLanguageGroupLocalesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumLanguageGroupLocalesA");
}
void _elfimplib_EnumLanguageGroupLocalesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumLanguageGroupLocalesA));
}


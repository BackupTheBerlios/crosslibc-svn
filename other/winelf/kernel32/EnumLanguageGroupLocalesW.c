#include "kernel32.h"
void _elfimplib_EnumLanguageGroupLocalesW() asm("EnumLanguageGroupLocalesW");
void *_imp__EnumLanguageGroupLocalesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumLanguageGroupLocalesW() {
load_dll_kernel32();
_imp__EnumLanguageGroupLocalesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumLanguageGroupLocalesW");
}
void _elfimplib_EnumLanguageGroupLocalesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumLanguageGroupLocalesW));
}


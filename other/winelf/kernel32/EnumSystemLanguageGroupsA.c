#include "kernel32.h"
void _elfimplib_EnumSystemLanguageGroupsA() asm("EnumSystemLanguageGroupsA");
void *_imp__EnumSystemLanguageGroupsA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumSystemLanguageGroupsA() {
load_dll_kernel32();
_imp__EnumSystemLanguageGroupsA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemLanguageGroupsA");
}
void _elfimplib_EnumSystemLanguageGroupsA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemLanguageGroupsA));
}


#include "kernel32.h"
void _elfimplib_EnumSystemLanguageGroupsW() asm("EnumSystemLanguageGroupsW");
void *_imp__EnumSystemLanguageGroupsW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumSystemLanguageGroupsW() {
load_dll_kernel32();
_imp__EnumSystemLanguageGroupsW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemLanguageGroupsW");
}
void _elfimplib_EnumSystemLanguageGroupsW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemLanguageGroupsW));
}


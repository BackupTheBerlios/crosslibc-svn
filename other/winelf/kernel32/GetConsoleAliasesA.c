#include "kernel32.h"
void _elfimplib_GetConsoleAliasesA() asm("GetConsoleAliasesA");
void *_imp__GetConsoleAliasesA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasesA() {
load_dll_kernel32();
_imp__GetConsoleAliasesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesA");
}
void _elfimplib_GetConsoleAliasesA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasesA));
}


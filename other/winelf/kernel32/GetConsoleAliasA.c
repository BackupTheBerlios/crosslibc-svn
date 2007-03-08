#include "kernel32.h"
void _elfimplib_GetConsoleAliasA() asm("GetConsoleAliasA");
void *_imp__GetConsoleAliasA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasA() {
load_dll_kernel32();
_imp__GetConsoleAliasA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasA");
}
void _elfimplib_GetConsoleAliasA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasA));
}


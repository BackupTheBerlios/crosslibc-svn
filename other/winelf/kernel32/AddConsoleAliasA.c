#include "kernel32.h"
void _elfimplib_AddConsoleAliasA() asm("AddConsoleAliasA");
void *_imp__AddConsoleAliasA = NULL;
__attribute__((constructor)) void _elfimplib_init_AddConsoleAliasA() {
load_dll_kernel32();
_imp__AddConsoleAliasA = (void *) _elf_GetProcAddress(_dll_kernel32, "AddConsoleAliasA");
}
void _elfimplib_AddConsoleAliasA() {
asm("leave\njmp *%0" : : "r"(_imp__AddConsoleAliasA));
}


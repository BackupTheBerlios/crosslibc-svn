#include "kernel32.h"
void _elfimplib_GetConsoleAliasesW() asm("GetConsoleAliasesW");
void *_imp__GetConsoleAliasesW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasesW() {
load_dll_kernel32();
_imp__GetConsoleAliasesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesW");
}
void _elfimplib_GetConsoleAliasesW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasesW));
}


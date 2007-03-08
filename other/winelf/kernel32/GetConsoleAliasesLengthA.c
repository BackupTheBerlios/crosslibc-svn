#include "kernel32.h"
void _elfimplib_GetConsoleAliasesLengthA() asm("GetConsoleAliasesLengthA");
void *_imp__GetConsoleAliasesLengthA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasesLengthA() {
load_dll_kernel32();
_imp__GetConsoleAliasesLengthA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesLengthA");
}
void _elfimplib_GetConsoleAliasesLengthA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasesLengthA));
}


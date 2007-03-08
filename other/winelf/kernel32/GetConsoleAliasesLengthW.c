#include "kernel32.h"
void _elfimplib_GetConsoleAliasesLengthW() asm("GetConsoleAliasesLengthW");
void *_imp__GetConsoleAliasesLengthW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasesLengthW() {
load_dll_kernel32();
_imp__GetConsoleAliasesLengthW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesLengthW");
}
void _elfimplib_GetConsoleAliasesLengthW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasesLengthW));
}


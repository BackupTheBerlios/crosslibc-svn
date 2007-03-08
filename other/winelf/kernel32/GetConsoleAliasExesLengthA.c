#include "kernel32.h"
void _elfimplib_GetConsoleAliasExesLengthA() asm("GetConsoleAliasExesLengthA");
void *_imp__GetConsoleAliasExesLengthA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasExesLengthA() {
load_dll_kernel32();
_imp__GetConsoleAliasExesLengthA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesLengthA");
}
void _elfimplib_GetConsoleAliasExesLengthA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasExesLengthA));
}


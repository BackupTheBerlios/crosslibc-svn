#include "kernel32.h"
void _elfimplib_GetConsoleAliasExesA() asm("GetConsoleAliasExesA");
void *_imp__GetConsoleAliasExesA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasExesA() {
load_dll_kernel32();
_imp__GetConsoleAliasExesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesA");
}
void _elfimplib_GetConsoleAliasExesA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasExesA));
}


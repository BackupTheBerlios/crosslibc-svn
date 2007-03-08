#include "kernel32.h"
void _elfimplib_GetConsoleAliasExesW() asm("GetConsoleAliasExesW");
void *_imp__GetConsoleAliasExesW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasExesW() {
load_dll_kernel32();
_imp__GetConsoleAliasExesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesW");
}
void _elfimplib_GetConsoleAliasExesW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasExesW));
}


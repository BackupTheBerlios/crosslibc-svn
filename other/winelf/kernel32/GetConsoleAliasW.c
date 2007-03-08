#include "kernel32.h"
void _elfimplib_GetConsoleAliasW() asm("GetConsoleAliasW");
void *_imp__GetConsoleAliasW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasW() {
load_dll_kernel32();
_imp__GetConsoleAliasW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasW");
}
void _elfimplib_GetConsoleAliasW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasW));
}


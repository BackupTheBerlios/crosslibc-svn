#include "kernel32.h"
void _elfimplib_GetConsoleAliasExesLengthW() asm("GetConsoleAliasExesLengthW");
void *_imp__GetConsoleAliasExesLengthW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasExesLengthW() {
load_dll_kernel32();
_imp__GetConsoleAliasExesLengthW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesLengthW");
}
void _elfimplib_GetConsoleAliasExesLengthW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasExesLengthW));
}


#include "kernel32.h"
void _elfimplib_GetConsoleTitleA() asm("GetConsoleTitleA");
void *_imp__GetConsoleTitleA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleTitleA() {
load_dll_kernel32();
_imp__GetConsoleTitleA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleTitleA");
}
void _elfimplib_GetConsoleTitleA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleTitleA));
}


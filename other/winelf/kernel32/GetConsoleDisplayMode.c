#include "kernel32.h"
void _elfimplib_GetConsoleDisplayMode() asm("GetConsoleDisplayMode");
void *_imp__GetConsoleDisplayMode = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleDisplayMode() {
load_dll_kernel32();
_imp__GetConsoleDisplayMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleDisplayMode");
}
void _elfimplib_GetConsoleDisplayMode() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleDisplayMode));
}


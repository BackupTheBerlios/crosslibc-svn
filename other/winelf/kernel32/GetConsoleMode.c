#include "kernel32.h"
void _elfimplib_GetConsoleMode() asm("GetConsoleMode");
void *_imp__GetConsoleMode = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleMode() {
load_dll_kernel32();
_imp__GetConsoleMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleMode");
}
void _elfimplib_GetConsoleMode() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleMode));
}


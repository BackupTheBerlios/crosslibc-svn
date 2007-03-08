#include "kernel32.h"
void _elfimplib_GetConsoleWindow() asm("GetConsoleWindow");
void *_imp__GetConsoleWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleWindow() {
load_dll_kernel32();
_imp__GetConsoleWindow = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleWindow");
}
void _elfimplib_GetConsoleWindow() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleWindow));
}


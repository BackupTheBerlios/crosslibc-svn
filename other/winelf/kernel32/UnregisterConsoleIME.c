#include "kernel32.h"
void _elfimplib_UnregisterConsoleIME() asm("UnregisterConsoleIME");
void *_imp__UnregisterConsoleIME = NULL;
__attribute__((constructor)) void _elfimplib_init_UnregisterConsoleIME() {
load_dll_kernel32();
_imp__UnregisterConsoleIME = (void *) _elf_GetProcAddress(_dll_kernel32, "UnregisterConsoleIME");
}
void _elfimplib_UnregisterConsoleIME() {
asm("leave\njmp *%0" : : "r"(_imp__UnregisterConsoleIME));
}


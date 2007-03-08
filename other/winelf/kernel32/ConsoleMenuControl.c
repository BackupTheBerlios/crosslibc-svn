#include "kernel32.h"
void _elfimplib_ConsoleMenuControl() asm("ConsoleMenuControl");
void *_imp__ConsoleMenuControl = NULL;
__attribute__((constructor)) void _elfimplib_init_ConsoleMenuControl() {
load_dll_kernel32();
_imp__ConsoleMenuControl = (void *) _elf_GetProcAddress(_dll_kernel32, "ConsoleMenuControl");
}
void _elfimplib_ConsoleMenuControl() {
asm("leave\njmp *%0" : : "r"(_imp__ConsoleMenuControl));
}


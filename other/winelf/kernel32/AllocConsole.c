#include "kernel32.h"
void _elfimplib_AllocConsole() asm("AllocConsole");
void *_imp__AllocConsole = NULL;
__attribute__((constructor)) void _elfimplib_init_AllocConsole() {
load_dll_kernel32();
_imp__AllocConsole = (void *) _elf_GetProcAddress(_dll_kernel32, "AllocConsole");
}
void _elfimplib_AllocConsole() {
asm("leave\njmp *%0" : : "r"(_imp__AllocConsole));
}


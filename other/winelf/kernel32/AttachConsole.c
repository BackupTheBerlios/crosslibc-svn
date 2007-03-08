#include "kernel32.h"
void _elfimplib_AttachConsole() asm("AttachConsole");
void *_imp__AttachConsole = NULL;
__attribute__((constructor)) void _elfimplib_init_AttachConsole() {
load_dll_kernel32();
_imp__AttachConsole = (void *) _elf_GetProcAddress(_dll_kernel32, "AttachConsole");
}
void _elfimplib_AttachConsole() {
asm("leave\njmp *%0" : : "r"(_imp__AttachConsole));
}


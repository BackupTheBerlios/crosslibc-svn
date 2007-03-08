#include "kernel32.h"
void _elfimplib_ReadConsoleA() asm("ReadConsoleA");
void *_imp__ReadConsoleA = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleA() {
load_dll_kernel32();
_imp__ReadConsoleA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleA");
}
void _elfimplib_ReadConsoleA() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleA));
}


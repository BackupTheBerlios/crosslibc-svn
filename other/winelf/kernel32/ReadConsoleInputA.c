#include "kernel32.h"
void _elfimplib_ReadConsoleInputA() asm("ReadConsoleInputA");
void *_imp__ReadConsoleInputA = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleInputA() {
load_dll_kernel32();
_imp__ReadConsoleInputA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputA");
}
void _elfimplib_ReadConsoleInputA() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleInputA));
}


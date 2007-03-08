#include "kernel32.h"
void _elfimplib_ReadConsoleInputExA() asm("ReadConsoleInputExA");
void *_imp__ReadConsoleInputExA = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleInputExA() {
load_dll_kernel32();
_imp__ReadConsoleInputExA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputExA");
}
void _elfimplib_ReadConsoleInputExA() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleInputExA));
}


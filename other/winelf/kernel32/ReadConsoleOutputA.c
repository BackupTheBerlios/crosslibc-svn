#include "kernel32.h"
void _elfimplib_ReadConsoleOutputA() asm("ReadConsoleOutputA");
void *_imp__ReadConsoleOutputA = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleOutputA() {
load_dll_kernel32();
_imp__ReadConsoleOutputA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputA");
}
void _elfimplib_ReadConsoleOutputA() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleOutputA));
}


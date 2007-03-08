#include "kernel32.h"
void _elfimplib_ReadConsoleOutputW() asm("ReadConsoleOutputW");
void *_imp__ReadConsoleOutputW = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleOutputW() {
load_dll_kernel32();
_imp__ReadConsoleOutputW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputW");
}
void _elfimplib_ReadConsoleOutputW() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleOutputW));
}


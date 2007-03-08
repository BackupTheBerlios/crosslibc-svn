#include "kernel32.h"
void _elfimplib_ReadConsoleInputExW() asm("ReadConsoleInputExW");
void *_imp__ReadConsoleInputExW = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleInputExW() {
load_dll_kernel32();
_imp__ReadConsoleInputExW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputExW");
}
void _elfimplib_ReadConsoleInputExW() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleInputExW));
}


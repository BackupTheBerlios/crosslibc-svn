#include "kernel32.h"
void _elfimplib_ReadConsoleW() asm("ReadConsoleW");
void *_imp__ReadConsoleW = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleW() {
load_dll_kernel32();
_imp__ReadConsoleW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleW");
}
void _elfimplib_ReadConsoleW() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleW));
}


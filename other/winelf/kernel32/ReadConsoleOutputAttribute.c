#include "kernel32.h"
void _elfimplib_ReadConsoleOutputAttribute() asm("ReadConsoleOutputAttribute");
void *_imp__ReadConsoleOutputAttribute = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleOutputAttribute() {
load_dll_kernel32();
_imp__ReadConsoleOutputAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputAttribute");
}
void _elfimplib_ReadConsoleOutputAttribute() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleOutputAttribute));
}


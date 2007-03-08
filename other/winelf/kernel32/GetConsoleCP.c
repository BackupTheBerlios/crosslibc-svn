#include "kernel32.h"
void _elfimplib_GetConsoleCP() asm("GetConsoleCP");
void *_imp__GetConsoleCP = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCP() {
load_dll_kernel32();
_imp__GetConsoleCP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCP");
}
void _elfimplib_GetConsoleCP() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCP));
}


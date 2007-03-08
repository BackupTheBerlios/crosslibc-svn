#include "kernel32.h"
void _elfimplib_SetConsoleCP() asm("SetConsoleCP");
void *_imp__SetConsoleCP = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleCP() {
load_dll_kernel32();
_imp__SetConsoleCP = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCP");
}
void _elfimplib_SetConsoleCP() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCP));
}


#include "kernel32.h"
void _elfimplib_SetConsoleOutputCP() asm("SetConsoleOutputCP");
void *_imp__SetConsoleOutputCP = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleOutputCP() {
load_dll_kernel32();
_imp__SetConsoleOutputCP = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleOutputCP");
}
void _elfimplib_SetConsoleOutputCP() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleOutputCP));
}


#include "kernel32.h"
void _elfimplib_GetConsoleOutputCP() asm("GetConsoleOutputCP");
void *_imp__GetConsoleOutputCP = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleOutputCP() {
load_dll_kernel32();
_imp__GetConsoleOutputCP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleOutputCP");
}
void _elfimplib_GetConsoleOutputCP() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleOutputCP));
}


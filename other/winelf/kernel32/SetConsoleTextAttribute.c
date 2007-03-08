#include "kernel32.h"
void _elfimplib_SetConsoleTextAttribute() asm("SetConsoleTextAttribute");
void *_imp__SetConsoleTextAttribute = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleTextAttribute() {
load_dll_kernel32();
_imp__SetConsoleTextAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleTextAttribute");
}
void _elfimplib_SetConsoleTextAttribute() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleTextAttribute));
}


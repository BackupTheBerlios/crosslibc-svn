#include "kernel32.h"
void _elfimplib_SetConsoleWindowInfo() asm("SetConsoleWindowInfo");
void *_imp__SetConsoleWindowInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleWindowInfo() {
load_dll_kernel32();
_imp__SetConsoleWindowInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleWindowInfo");
}
void _elfimplib_SetConsoleWindowInfo() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleWindowInfo));
}


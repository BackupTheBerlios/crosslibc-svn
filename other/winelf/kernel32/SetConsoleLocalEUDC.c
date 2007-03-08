#include "kernel32.h"
void _elfimplib_SetConsoleLocalEUDC() asm("SetConsoleLocalEUDC");
void *_imp__SetConsoleLocalEUDC = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleLocalEUDC() {
load_dll_kernel32();
_imp__SetConsoleLocalEUDC = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleLocalEUDC");
}
void _elfimplib_SetConsoleLocalEUDC() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleLocalEUDC));
}


#include "kernel32.h"
void _elfimplib_SetConsoleInputExeNameW() asm("SetConsoleInputExeNameW");
void *_imp__SetConsoleInputExeNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleInputExeNameW() {
load_dll_kernel32();
_imp__SetConsoleInputExeNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleInputExeNameW");
}
void _elfimplib_SetConsoleInputExeNameW() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleInputExeNameW));
}


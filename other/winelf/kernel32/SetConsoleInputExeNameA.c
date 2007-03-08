#include "kernel32.h"
void _elfimplib_SetConsoleInputExeNameA() asm("SetConsoleInputExeNameA");
void *_imp__SetConsoleInputExeNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleInputExeNameA() {
load_dll_kernel32();
_imp__SetConsoleInputExeNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleInputExeNameA");
}
void _elfimplib_SetConsoleInputExeNameA() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleInputExeNameA));
}


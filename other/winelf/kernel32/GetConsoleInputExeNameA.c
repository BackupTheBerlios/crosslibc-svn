#include "kernel32.h"
void _elfimplib_GetConsoleInputExeNameA() asm("GetConsoleInputExeNameA");
void *_imp__GetConsoleInputExeNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleInputExeNameA() {
load_dll_kernel32();
_imp__GetConsoleInputExeNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleInputExeNameA");
}
void _elfimplib_GetConsoleInputExeNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleInputExeNameA));
}


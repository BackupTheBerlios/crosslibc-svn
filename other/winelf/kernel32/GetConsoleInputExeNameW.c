#include "kernel32.h"
void _elfimplib_GetConsoleInputExeNameW() asm("GetConsoleInputExeNameW");
void *_imp__GetConsoleInputExeNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleInputExeNameW() {
load_dll_kernel32();
_imp__GetConsoleInputExeNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleInputExeNameW");
}
void _elfimplib_GetConsoleInputExeNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleInputExeNameW));
}


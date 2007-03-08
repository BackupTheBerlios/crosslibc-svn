#include "kernel32.h"
void _elfimplib_GetNumberOfConsoleInputEvents() asm("GetNumberOfConsoleInputEvents");
void *_imp__GetNumberOfConsoleInputEvents = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumberOfConsoleInputEvents() {
load_dll_kernel32();
_imp__GetNumberOfConsoleInputEvents = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberOfConsoleInputEvents");
}
void _elfimplib_GetNumberOfConsoleInputEvents() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumberOfConsoleInputEvents));
}


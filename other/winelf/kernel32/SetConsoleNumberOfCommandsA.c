#include "kernel32.h"
void _elfimplib_SetConsoleNumberOfCommandsA() asm("SetConsoleNumberOfCommandsA");
void *_imp__SetConsoleNumberOfCommandsA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleNumberOfCommandsA() {
load_dll_kernel32();
_imp__SetConsoleNumberOfCommandsA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleNumberOfCommandsA");
}
void _elfimplib_SetConsoleNumberOfCommandsA() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleNumberOfCommandsA));
}


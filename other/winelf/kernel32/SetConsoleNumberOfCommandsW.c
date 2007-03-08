#include "kernel32.h"
void _elfimplib_SetConsoleNumberOfCommandsW() asm("SetConsoleNumberOfCommandsW");
void *_imp__SetConsoleNumberOfCommandsW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleNumberOfCommandsW() {
load_dll_kernel32();
_imp__SetConsoleNumberOfCommandsW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleNumberOfCommandsW");
}
void _elfimplib_SetConsoleNumberOfCommandsW() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleNumberOfCommandsW));
}


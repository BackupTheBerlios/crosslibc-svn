#include "kernel32.h"
void _elfimplib_SetConsoleCtrlHandler() asm("SetConsoleCtrlHandler");
void *_imp__SetConsoleCtrlHandler = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleCtrlHandler() {
load_dll_kernel32();
_imp__SetConsoleCtrlHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCtrlHandler");
}
void _elfimplib_SetConsoleCtrlHandler() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCtrlHandler));
}


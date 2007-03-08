#include "kernel32.h"
void _elfimplib_GenerateConsoleCtrlEvent() asm("GenerateConsoleCtrlEvent");
void *_imp__GenerateConsoleCtrlEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_GenerateConsoleCtrlEvent() {
load_dll_kernel32();
_imp__GenerateConsoleCtrlEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "GenerateConsoleCtrlEvent");
}
void _elfimplib_GenerateConsoleCtrlEvent() {
asm("leave\njmp *%0" : : "r"(_imp__GenerateConsoleCtrlEvent));
}


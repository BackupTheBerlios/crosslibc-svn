#include "kernel32.h"
void _elfimplib_WriteConsoleInputVDMW() asm("WriteConsoleInputVDMW");
void *_imp__WriteConsoleInputVDMW = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleInputVDMW() {
load_dll_kernel32();
_imp__WriteConsoleInputVDMW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputVDMW");
}
void _elfimplib_WriteConsoleInputVDMW() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleInputVDMW));
}


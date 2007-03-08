#include "kernel32.h"
void _elfimplib_WinExec() asm("WinExec");
void *_imp__WinExec = NULL;
__attribute__((constructor)) void _elfimplib_init_WinExec() {
load_dll_kernel32();
_imp__WinExec = (void *) _elf_GetProcAddress(_dll_kernel32, "WinExec");
}
void _elfimplib_WinExec() {
asm("leave\njmp *%0" : : "r"(_imp__WinExec));
}


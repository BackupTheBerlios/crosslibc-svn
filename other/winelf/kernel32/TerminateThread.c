#include "kernel32.h"
void _elfimplib_TerminateThread() asm("TerminateThread");
void *_imp__TerminateThread = NULL;
__attribute__((constructor)) void _elfimplib_init_TerminateThread() {
load_dll_kernel32();
_imp__TerminateThread = (void *) _elf_GetProcAddress(_dll_kernel32, "TerminateThread");
}
void _elfimplib_TerminateThread() {
asm("leave\njmp *%0" : : "r"(_imp__TerminateThread));
}


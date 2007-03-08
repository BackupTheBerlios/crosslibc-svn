#include "kernel32.h"
void _elfimplib_TerminateProcess() asm("TerminateProcess");
void *_imp__TerminateProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_TerminateProcess() {
load_dll_kernel32();
_imp__TerminateProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "TerminateProcess");
}
void _elfimplib_TerminateProcess() {
asm("leave\njmp *%0" : : "r"(_imp__TerminateProcess));
}


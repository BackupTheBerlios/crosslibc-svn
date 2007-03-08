#include "kernel32.h"
void _elfimplib_TerminateJobObject() asm("TerminateJobObject");
void *_imp__TerminateJobObject = NULL;
__attribute__((constructor)) void _elfimplib_init_TerminateJobObject() {
load_dll_kernel32();
_imp__TerminateJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "TerminateJobObject");
}
void _elfimplib_TerminateJobObject() {
asm("leave\njmp *%0" : : "r"(_imp__TerminateJobObject));
}


#include "kernel32.h"
void _elfimplib_SetThreadContext() asm("SetThreadContext");
void *_imp__SetThreadContext = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadContext() {
load_dll_kernel32();
_imp__SetThreadContext = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadContext");
}
void _elfimplib_SetThreadContext() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadContext));
}


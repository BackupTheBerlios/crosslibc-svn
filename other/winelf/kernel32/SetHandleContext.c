#include "kernel32.h"
void _elfimplib_SetHandleContext() asm("SetHandleContext");
void *_imp__SetHandleContext = NULL;
__attribute__((constructor)) void _elfimplib_init_SetHandleContext() {
load_dll_kernel32();
_imp__SetHandleContext = (void *) _elf_GetProcAddress(_dll_kernel32, "SetHandleContext");
}
void _elfimplib_SetHandleContext() {
asm("leave\njmp *%0" : : "r"(_imp__SetHandleContext));
}


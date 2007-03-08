#include "kernel32.h"
void _elfimplib_GetHandleContext() asm("GetHandleContext");
void *_imp__GetHandleContext = NULL;
__attribute__((constructor)) void _elfimplib_init_GetHandleContext() {
load_dll_kernel32();
_imp__GetHandleContext = (void *) _elf_GetProcAddress(_dll_kernel32, "GetHandleContext");
}
void _elfimplib_GetHandleContext() {
asm("leave\njmp *%0" : : "r"(_imp__GetHandleContext));
}


#include "kernel32.h"
void _elfimplib_SetUnhandledExceptionFilter() asm("SetUnhandledExceptionFilter");
void *_imp__SetUnhandledExceptionFilter = NULL;
__attribute__((constructor)) void _elfimplib_init_SetUnhandledExceptionFilter() {
load_dll_kernel32();
_imp__SetUnhandledExceptionFilter = (void *) _elf_GetProcAddress(_dll_kernel32, "SetUnhandledExceptionFilter");
}
void _elfimplib_SetUnhandledExceptionFilter() {
asm("leave\njmp *%0" : : "r"(_imp__SetUnhandledExceptionFilter));
}


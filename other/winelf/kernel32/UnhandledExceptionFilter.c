#include "kernel32.h"
void _elfimplib_UnhandledExceptionFilter() asm("UnhandledExceptionFilter");
void *_imp__UnhandledExceptionFilter = NULL;
__attribute__((constructor)) void _elfimplib_init_UnhandledExceptionFilter() {
load_dll_kernel32();
_imp__UnhandledExceptionFilter = (void *) _elf_GetProcAddress(_dll_kernel32, "UnhandledExceptionFilter");
}
void _elfimplib_UnhandledExceptionFilter() {
asm("leave\njmp *%0" : : "r"(_imp__UnhandledExceptionFilter));
}


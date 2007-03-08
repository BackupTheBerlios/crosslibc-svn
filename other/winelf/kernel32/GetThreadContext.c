#include "kernel32.h"
void _elfimplib_GetThreadContext() asm("GetThreadContext");
void *_imp__GetThreadContext = NULL;
__attribute__((constructor)) void _elfimplib_init_GetThreadContext() {
load_dll_kernel32();
_imp__GetThreadContext = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadContext");
}
void _elfimplib_GetThreadContext() {
asm("leave\njmp *%0" : : "r"(_imp__GetThreadContext));
}


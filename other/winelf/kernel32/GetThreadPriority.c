#include "kernel32.h"
void _elfimplib_GetThreadPriority() asm("GetThreadPriority");
void *_imp__GetThreadPriority = NULL;
__attribute__((constructor)) void _elfimplib_init_GetThreadPriority() {
load_dll_kernel32();
_imp__GetThreadPriority = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadPriority");
}
void _elfimplib_GetThreadPriority() {
asm("leave\njmp *%0" : : "r"(_imp__GetThreadPriority));
}


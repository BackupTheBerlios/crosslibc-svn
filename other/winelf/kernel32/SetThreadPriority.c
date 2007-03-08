#include "kernel32.h"
void _elfimplib_SetThreadPriority() asm("SetThreadPriority");
void *_imp__SetThreadPriority = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadPriority() {
load_dll_kernel32();
_imp__SetThreadPriority = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadPriority");
}
void _elfimplib_SetThreadPriority() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadPriority));
}


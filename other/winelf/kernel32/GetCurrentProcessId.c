#include "kernel32.h"
void _elfimplib_GetCurrentProcessId() asm("GetCurrentProcessId");
void *_imp__GetCurrentProcessId = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentProcessId() {
load_dll_kernel32();
_imp__GetCurrentProcessId = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentProcessId");
}
void _elfimplib_GetCurrentProcessId() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentProcessId));
}


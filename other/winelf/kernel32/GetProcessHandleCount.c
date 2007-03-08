#include "kernel32.h"
void _elfimplib_GetProcessHandleCount() asm("GetProcessHandleCount");
void *_imp__GetProcessHandleCount = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessHandleCount() {
load_dll_kernel32();
_imp__GetProcessHandleCount = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessHandleCount");
}
void _elfimplib_GetProcessHandleCount() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessHandleCount));
}


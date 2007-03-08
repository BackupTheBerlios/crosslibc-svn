#include "kernel32.h"
void _elfimplib_GetCurrentProcess() asm("GetCurrentProcess");
void *_imp__GetCurrentProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentProcess() {
load_dll_kernel32();
_imp__GetCurrentProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentProcess");
}
void _elfimplib_GetCurrentProcess() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentProcess));
}


#include "kernel32.h"
void _elfimplib_GetCurrentThread() asm("GetCurrentThread");
void *_imp__GetCurrentThread = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentThread() {
load_dll_kernel32();
_imp__GetCurrentThread = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentThread");
}
void _elfimplib_GetCurrentThread() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentThread));
}


#include "kernel32.h"
void _elfimplib_GetModuleFileNameA() asm("GetModuleFileNameA");
void *_imp__GetModuleFileNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetModuleFileNameA() {
load_dll_kernel32();
_imp__GetModuleFileNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleFileNameA");
}
void _elfimplib_GetModuleFileNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetModuleFileNameA));
}


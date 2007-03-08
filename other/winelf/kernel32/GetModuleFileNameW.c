#include "kernel32.h"
void _elfimplib_GetModuleFileNameW() asm("GetModuleFileNameW");
void *_imp__GetModuleFileNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetModuleFileNameW() {
load_dll_kernel32();
_imp__GetModuleFileNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleFileNameW");
}
void _elfimplib_GetModuleFileNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetModuleFileNameW));
}


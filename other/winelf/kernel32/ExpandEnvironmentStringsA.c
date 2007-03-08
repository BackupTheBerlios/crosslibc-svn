#include "kernel32.h"
void _elfimplib_ExpandEnvironmentStringsA() asm("ExpandEnvironmentStringsA");
void *_imp__ExpandEnvironmentStringsA = NULL;
__attribute__((constructor)) void _elfimplib_init_ExpandEnvironmentStringsA() {
load_dll_kernel32();
_imp__ExpandEnvironmentStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpandEnvironmentStringsA");
}
void _elfimplib_ExpandEnvironmentStringsA() {
asm("leave\njmp *%0" : : "r"(_imp__ExpandEnvironmentStringsA));
}


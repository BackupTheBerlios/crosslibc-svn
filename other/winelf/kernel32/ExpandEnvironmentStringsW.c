#include "kernel32.h"
void _elfimplib_ExpandEnvironmentStringsW() asm("ExpandEnvironmentStringsW");
void *_imp__ExpandEnvironmentStringsW = NULL;
__attribute__((constructor)) void _elfimplib_init_ExpandEnvironmentStringsW() {
load_dll_kernel32();
_imp__ExpandEnvironmentStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpandEnvironmentStringsW");
}
void _elfimplib_ExpandEnvironmentStringsW() {
asm("leave\njmp *%0" : : "r"(_imp__ExpandEnvironmentStringsW));
}


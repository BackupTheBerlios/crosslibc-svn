#include "kernel32.h"
void _elfimplib_IsWow64Process() asm("IsWow64Process");
void *_imp__IsWow64Process = NULL;
__attribute__((constructor)) void _elfimplib_init_IsWow64Process() {
load_dll_kernel32();
_imp__IsWow64Process = (void *) _elf_GetProcAddress(_dll_kernel32, "IsWow64Process");
}
void _elfimplib_IsWow64Process() {
asm("leave\njmp *%0" : : "r"(_imp__IsWow64Process));
}


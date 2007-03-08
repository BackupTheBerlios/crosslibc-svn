#include "kernel32.h"
void _elfimplib_VirtualQueryEx() asm("VirtualQueryEx");
void *_imp__VirtualQueryEx = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualQueryEx() {
load_dll_kernel32();
_imp__VirtualQueryEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualQueryEx");
}
void _elfimplib_VirtualQueryEx() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualQueryEx));
}


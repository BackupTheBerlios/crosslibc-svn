#include "kernel32.h"
void _elfimplib_GetNamedPipeInfo() asm("GetNamedPipeInfo");
void *_imp__GetNamedPipeInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNamedPipeInfo() {
load_dll_kernel32();
_imp__GetNamedPipeInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNamedPipeInfo");
}
void _elfimplib_GetNamedPipeInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetNamedPipeInfo));
}


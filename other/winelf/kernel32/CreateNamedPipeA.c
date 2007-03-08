#include "kernel32.h"
void _elfimplib_CreateNamedPipeA() asm("CreateNamedPipeA");
void *_imp__CreateNamedPipeA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateNamedPipeA() {
load_dll_kernel32();
_imp__CreateNamedPipeA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateNamedPipeA");
}
void _elfimplib_CreateNamedPipeA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateNamedPipeA));
}


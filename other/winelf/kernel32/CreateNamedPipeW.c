#include "kernel32.h"
void _elfimplib_CreateNamedPipeW() asm("CreateNamedPipeW");
void *_imp__CreateNamedPipeW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateNamedPipeW() {
load_dll_kernel32();
_imp__CreateNamedPipeW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateNamedPipeW");
}
void _elfimplib_CreateNamedPipeW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateNamedPipeW));
}


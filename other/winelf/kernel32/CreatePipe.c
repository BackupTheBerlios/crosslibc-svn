#include "kernel32.h"
void _elfimplib_CreatePipe() asm("CreatePipe");
void *_imp__CreatePipe = NULL;
__attribute__((constructor)) void _elfimplib_init_CreatePipe() {
load_dll_kernel32();
_imp__CreatePipe = (void *) _elf_GetProcAddress(_dll_kernel32, "CreatePipe");
}
void _elfimplib_CreatePipe() {
asm("leave\njmp *%0" : : "r"(_imp__CreatePipe));
}


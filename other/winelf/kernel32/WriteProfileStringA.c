#include "kernel32.h"
void _elfimplib_WriteProfileStringA() asm("WriteProfileStringA");
void *_imp__WriteProfileStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteProfileStringA() {
load_dll_kernel32();
_imp__WriteProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileStringA");
}
void _elfimplib_WriteProfileStringA() {
asm("leave\njmp *%0" : : "r"(_imp__WriteProfileStringA));
}


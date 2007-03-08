#include "kernel32.h"
void _elfimplib_WriteFileEx() asm("WriteFileEx");
void *_imp__WriteFileEx = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteFileEx() {
load_dll_kernel32();
_imp__WriteFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteFileEx");
}
void _elfimplib_WriteFileEx() {
asm("leave\njmp *%0" : : "r"(_imp__WriteFileEx));
}


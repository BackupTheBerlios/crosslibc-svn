#include "kernel32.h"
void _elfimplib_ReadFileEx() asm("ReadFileEx");
void *_imp__ReadFileEx = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadFileEx() {
load_dll_kernel32();
_imp__ReadFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadFileEx");
}
void _elfimplib_ReadFileEx() {
asm("leave\njmp *%0" : : "r"(_imp__ReadFileEx));
}


#include "kernel32.h"
void _elfimplib_WriteProfileStringW() asm("WriteProfileStringW");
void *_imp__WriteProfileStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteProfileStringW() {
load_dll_kernel32();
_imp__WriteProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileStringW");
}
void _elfimplib_WriteProfileStringW() {
asm("leave\njmp *%0" : : "r"(_imp__WriteProfileStringW));
}


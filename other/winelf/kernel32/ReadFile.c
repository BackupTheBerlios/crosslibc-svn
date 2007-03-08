#include "kernel32.h"
void _elfimplib_ReadFile() asm("ReadFile");
void *_imp__ReadFile = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadFile() {
load_dll_kernel32();
_imp__ReadFile = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadFile");
}
void _elfimplib_ReadFile() {
asm("leave\njmp *%0" : : "r"(_imp__ReadFile));
}


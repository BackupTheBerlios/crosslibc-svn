#include "kernel32.h"
void _elfimplib_ReplaceFile() asm("ReplaceFile");
void *_imp__ReplaceFile = NULL;
__attribute__((constructor)) void _elfimplib_init_ReplaceFile() {
load_dll_kernel32();
_imp__ReplaceFile = (void *) _elf_GetProcAddress(_dll_kernel32, "ReplaceFile");
}
void _elfimplib_ReplaceFile() {
asm("leave\njmp *%0" : : "r"(_imp__ReplaceFile));
}


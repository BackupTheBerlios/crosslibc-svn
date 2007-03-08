#include "kernel32.h"
void _elfimplib_ReplaceFileW() asm("ReplaceFileW");
void *_imp__ReplaceFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_ReplaceFileW() {
load_dll_kernel32();
_imp__ReplaceFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReplaceFileW");
}
void _elfimplib_ReplaceFileW() {
asm("leave\njmp *%0" : : "r"(_imp__ReplaceFileW));
}


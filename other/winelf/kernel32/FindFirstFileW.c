#include "kernel32.h"
void _elfimplib_FindFirstFileW() asm("FindFirstFileW");
void *_imp__FindFirstFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstFileW() {
load_dll_kernel32();
_imp__FindFirstFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileW");
}
void _elfimplib_FindFirstFileW() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstFileW));
}


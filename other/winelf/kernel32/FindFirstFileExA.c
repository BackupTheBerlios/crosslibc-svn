#include "kernel32.h"
void _elfimplib_FindFirstFileExA() asm("FindFirstFileExA");
void *_imp__FindFirstFileExA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstFileExA() {
load_dll_kernel32();
_imp__FindFirstFileExA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileExA");
}
void _elfimplib_FindFirstFileExA() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstFileExA));
}


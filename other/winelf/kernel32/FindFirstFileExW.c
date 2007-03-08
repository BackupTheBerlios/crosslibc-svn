#include "kernel32.h"
void _elfimplib_FindFirstFileExW() asm("FindFirstFileExW");
void *_imp__FindFirstFileExW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstFileExW() {
load_dll_kernel32();
_imp__FindFirstFileExW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileExW");
}
void _elfimplib_FindFirstFileExW() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstFileExW));
}


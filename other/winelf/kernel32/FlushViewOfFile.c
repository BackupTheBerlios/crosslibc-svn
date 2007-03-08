#include "kernel32.h"
void _elfimplib_FlushViewOfFile() asm("FlushViewOfFile");
void *_imp__FlushViewOfFile = NULL;
__attribute__((constructor)) void _elfimplib_init_FlushViewOfFile() {
load_dll_kernel32();
_imp__FlushViewOfFile = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushViewOfFile");
}
void _elfimplib_FlushViewOfFile() {
asm("leave\njmp *%0" : : "r"(_imp__FlushViewOfFile));
}


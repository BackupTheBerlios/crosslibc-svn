#include "kernel32.h"
void _elfimplib_UnmapViewOfFile() asm("UnmapViewOfFile");
void *_imp__UnmapViewOfFile = NULL;
__attribute__((constructor)) void _elfimplib_init_UnmapViewOfFile() {
load_dll_kernel32();
_imp__UnmapViewOfFile = (void *) _elf_GetProcAddress(_dll_kernel32, "UnmapViewOfFile");
}
void _elfimplib_UnmapViewOfFile() {
asm("leave\njmp *%0" : : "r"(_imp__UnmapViewOfFile));
}


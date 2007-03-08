#include "kernel32.h"
void _elfimplib_MapViewOfFile() asm("MapViewOfFile");
void *_imp__MapViewOfFile = NULL;
__attribute__((constructor)) void _elfimplib_init_MapViewOfFile() {
load_dll_kernel32();
_imp__MapViewOfFile = (void *) _elf_GetProcAddress(_dll_kernel32, "MapViewOfFile");
}
void _elfimplib_MapViewOfFile() {
asm("leave\njmp *%0" : : "r"(_imp__MapViewOfFile));
}


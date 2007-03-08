#include "kernel32.h"
void _elfimplib_MapViewOfFileEx() asm("MapViewOfFileEx");
void *_imp__MapViewOfFileEx = NULL;
__attribute__((constructor)) void _elfimplib_init_MapViewOfFileEx() {
load_dll_kernel32();
_imp__MapViewOfFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "MapViewOfFileEx");
}
void _elfimplib_MapViewOfFileEx() {
asm("leave\njmp *%0" : : "r"(_imp__MapViewOfFileEx));
}


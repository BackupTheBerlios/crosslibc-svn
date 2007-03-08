#include "kernel32.h"
void _elfimplib_CompareStringA() asm("CompareStringA");
void *_imp__CompareStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_CompareStringA() {
load_dll_kernel32();
_imp__CompareStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "CompareStringA");
}
void _elfimplib_CompareStringA() {
asm("leave\njmp *%0" : : "r"(_imp__CompareStringA));
}


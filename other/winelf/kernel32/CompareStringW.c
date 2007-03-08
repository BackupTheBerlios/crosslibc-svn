#include "kernel32.h"
void _elfimplib_CompareStringW() asm("CompareStringW");
void *_imp__CompareStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_CompareStringW() {
load_dll_kernel32();
_imp__CompareStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "CompareStringW");
}
void _elfimplib_CompareStringW() {
asm("leave\njmp *%0" : : "r"(_imp__CompareStringW));
}


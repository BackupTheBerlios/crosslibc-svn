#include "kernel32.h"
void _elfimplib_CompareFileTime() asm("CompareFileTime");
void *_imp__CompareFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_CompareFileTime() {
load_dll_kernel32();
_imp__CompareFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "CompareFileTime");
}
void _elfimplib_CompareFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__CompareFileTime));
}


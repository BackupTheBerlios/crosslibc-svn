#include "kernel32.h"
void _elfimplib_IsBadCodePtr() asm("IsBadCodePtr");
void *_imp__IsBadCodePtr = NULL;
__attribute__((constructor)) void _elfimplib_init_IsBadCodePtr() {
load_dll_kernel32();
_imp__IsBadCodePtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadCodePtr");
}
void _elfimplib_IsBadCodePtr() {
asm("leave\njmp *%0" : : "r"(_imp__IsBadCodePtr));
}


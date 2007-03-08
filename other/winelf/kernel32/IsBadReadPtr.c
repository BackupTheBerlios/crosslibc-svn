#include "kernel32.h"
void _elfimplib_IsBadReadPtr() asm("IsBadReadPtr");
void *_imp__IsBadReadPtr = NULL;
__attribute__((constructor)) void _elfimplib_init_IsBadReadPtr() {
load_dll_kernel32();
_imp__IsBadReadPtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadReadPtr");
}
void _elfimplib_IsBadReadPtr() {
asm("leave\njmp *%0" : : "r"(_imp__IsBadReadPtr));
}


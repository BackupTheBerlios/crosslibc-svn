#include "kernel32.h"
void _elfimplib_IsBadHugeReadPtr() asm("IsBadHugeReadPtr");
void *_imp__IsBadHugeReadPtr = NULL;
__attribute__((constructor)) void _elfimplib_init_IsBadHugeReadPtr() {
load_dll_kernel32();
_imp__IsBadHugeReadPtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadHugeReadPtr");
}
void _elfimplib_IsBadHugeReadPtr() {
asm("leave\njmp *%0" : : "r"(_imp__IsBadHugeReadPtr));
}


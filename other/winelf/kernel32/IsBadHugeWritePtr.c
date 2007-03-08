#include "kernel32.h"
void _elfimplib_IsBadHugeWritePtr() asm("IsBadHugeWritePtr");
void *_imp__IsBadHugeWritePtr = NULL;
__attribute__((constructor)) void _elfimplib_init_IsBadHugeWritePtr() {
load_dll_kernel32();
_imp__IsBadHugeWritePtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadHugeWritePtr");
}
void _elfimplib_IsBadHugeWritePtr() {
asm("leave\njmp *%0" : : "r"(_imp__IsBadHugeWritePtr));
}


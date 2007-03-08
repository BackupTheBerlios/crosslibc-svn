#include "kernel32.h"
void _elfimplib_IsBadWritePtr() asm("IsBadWritePtr");
void *_imp__IsBadWritePtr = NULL;
__attribute__((constructor)) void _elfimplib_init_IsBadWritePtr() {
load_dll_kernel32();
_imp__IsBadWritePtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadWritePtr");
}
void _elfimplib_IsBadWritePtr() {
asm("leave\njmp *%0" : : "r"(_imp__IsBadWritePtr));
}


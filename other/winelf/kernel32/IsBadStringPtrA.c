#include "kernel32.h"
void _elfimplib_IsBadStringPtrA() asm("IsBadStringPtrA");
void *_imp__IsBadStringPtrA = NULL;
__attribute__((constructor)) void _elfimplib_init_IsBadStringPtrA() {
load_dll_kernel32();
_imp__IsBadStringPtrA = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadStringPtrA");
}
void _elfimplib_IsBadStringPtrA() {
asm("leave\njmp *%0" : : "r"(_imp__IsBadStringPtrA));
}


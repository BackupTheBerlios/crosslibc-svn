#include "kernel32.h"
void _elfimplib_IsBadStringPtrW() asm("IsBadStringPtrW");
void *_imp__IsBadStringPtrW = NULL;
__attribute__((constructor)) void _elfimplib_init_IsBadStringPtrW() {
load_dll_kernel32();
_imp__IsBadStringPtrW = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadStringPtrW");
}
void _elfimplib_IsBadStringPtrW() {
asm("leave\njmp *%0" : : "r"(_imp__IsBadStringPtrW));
}


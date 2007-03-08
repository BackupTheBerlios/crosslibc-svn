#include "kernel32.h"
void _elfimplib_GetBinaryTypeA() asm("GetBinaryTypeA");
void *_imp__GetBinaryTypeA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetBinaryTypeA() {
load_dll_kernel32();
_imp__GetBinaryTypeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetBinaryTypeA");
}
void _elfimplib_GetBinaryTypeA() {
asm("leave\njmp *%0" : : "r"(_imp__GetBinaryTypeA));
}


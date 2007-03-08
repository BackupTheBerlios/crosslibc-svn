#include "kernel32.h"
void _elfimplib_GetBinaryType() asm("GetBinaryType");
void *_imp__GetBinaryType = NULL;
__attribute__((constructor)) void _elfimplib_init_GetBinaryType() {
load_dll_kernel32();
_imp__GetBinaryType = (void *) _elf_GetProcAddress(_dll_kernel32, "GetBinaryType");
}
void _elfimplib_GetBinaryType() {
asm("leave\njmp *%0" : : "r"(_imp__GetBinaryType));
}


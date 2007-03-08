#include "kernel32.h"
void _elfimplib_GetFileTime() asm("GetFileTime");
void *_imp__GetFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileTime() {
load_dll_kernel32();
_imp__GetFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileTime");
}
void _elfimplib_GetFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileTime));
}


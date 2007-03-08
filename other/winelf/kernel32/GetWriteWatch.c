#include "kernel32.h"
void _elfimplib_GetWriteWatch() asm("GetWriteWatch");
void *_imp__GetWriteWatch = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWriteWatch() {
load_dll_kernel32();
_imp__GetWriteWatch = (void *) _elf_GetProcAddress(_dll_kernel32, "GetWriteWatch");
}
void _elfimplib_GetWriteWatch() {
asm("leave\njmp *%0" : : "r"(_imp__GetWriteWatch));
}


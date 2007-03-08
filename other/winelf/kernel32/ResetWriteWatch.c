#include "kernel32.h"
void _elfimplib_ResetWriteWatch() asm("ResetWriteWatch");
void *_imp__ResetWriteWatch = NULL;
__attribute__((constructor)) void _elfimplib_init_ResetWriteWatch() {
load_dll_kernel32();
_imp__ResetWriteWatch = (void *) _elf_GetProcAddress(_dll_kernel32, "ResetWriteWatch");
}
void _elfimplib_ResetWriteWatch() {
asm("leave\njmp *%0" : : "r"(_imp__ResetWriteWatch));
}


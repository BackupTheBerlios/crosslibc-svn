#include "kernel32.h"
void _elfimplib_RtlUnwind() asm("RtlUnwind");
void *_imp__RtlUnwind = NULL;
__attribute__((constructor)) void _elfimplib_init_RtlUnwind() {
load_dll_kernel32();
_imp__RtlUnwind = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlUnwind");
}
void _elfimplib_RtlUnwind() {
asm("leave\njmp *%0" : : "r"(_imp__RtlUnwind));
}


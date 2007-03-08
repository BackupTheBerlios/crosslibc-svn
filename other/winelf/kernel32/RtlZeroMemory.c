#include "kernel32.h"
void _elfimplib_RtlZeroMemory() asm("RtlZeroMemory");
void *_imp__RtlZeroMemory = NULL;
__attribute__((constructor)) void _elfimplib_init_RtlZeroMemory() {
load_dll_kernel32();
_imp__RtlZeroMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlZeroMemory");
}
void _elfimplib_RtlZeroMemory() {
asm("leave\njmp *%0" : : "r"(_imp__RtlZeroMemory));
}


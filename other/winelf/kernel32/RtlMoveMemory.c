#include "kernel32.h"
void _elfimplib_RtlMoveMemory() asm("RtlMoveMemory");
void *_imp__RtlMoveMemory = NULL;
__attribute__((constructor)) void _elfimplib_init_RtlMoveMemory() {
load_dll_kernel32();
_imp__RtlMoveMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlMoveMemory");
}
void _elfimplib_RtlMoveMemory() {
asm("leave\njmp *%0" : : "r"(_imp__RtlMoveMemory));
}


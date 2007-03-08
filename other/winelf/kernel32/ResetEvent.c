#include "kernel32.h"
void _elfimplib_ResetEvent() asm("ResetEvent");
void *_imp__ResetEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_ResetEvent() {
load_dll_kernel32();
_imp__ResetEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "ResetEvent");
}
void _elfimplib_ResetEvent() {
asm("leave\njmp *%0" : : "r"(_imp__ResetEvent));
}


#include "kernel32.h"
void _elfimplib_QueueUserAPC() asm("QueueUserAPC");
void *_imp__QueueUserAPC = NULL;
__attribute__((constructor)) void _elfimplib_init_QueueUserAPC() {
load_dll_kernel32();
_imp__QueueUserAPC = (void *) _elf_GetProcAddress(_dll_kernel32, "QueueUserAPC");
}
void _elfimplib_QueueUserAPC() {
asm("leave\njmp *%0" : : "r"(_imp__QueueUserAPC));
}


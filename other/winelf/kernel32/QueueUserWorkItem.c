#include "kernel32.h"
void _elfimplib_QueueUserWorkItem() asm("QueueUserWorkItem");
void *_imp__QueueUserWorkItem = NULL;
__attribute__((constructor)) void _elfimplib_init_QueueUserWorkItem() {
load_dll_kernel32();
_imp__QueueUserWorkItem = (void *) _elf_GetProcAddress(_dll_kernel32, "QueueUserWorkItem");
}
void _elfimplib_QueueUserWorkItem() {
asm("leave\njmp *%0" : : "r"(_imp__QueueUserWorkItem));
}


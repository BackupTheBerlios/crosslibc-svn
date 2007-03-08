#include "kernel32.h"
void _elfimplib_QueryMemoryResourceNotification() asm("QueryMemoryResourceNotification");
void *_imp__QueryMemoryResourceNotification = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryMemoryResourceNotification() {
load_dll_kernel32();
_imp__QueryMemoryResourceNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryMemoryResourceNotification");
}
void _elfimplib_QueryMemoryResourceNotification() {
asm("leave\njmp *%0" : : "r"(_imp__QueryMemoryResourceNotification));
}


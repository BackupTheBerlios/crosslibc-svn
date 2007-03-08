#include "kernel32.h"
void _elfimplib_CreateMemoryResourceNotification() asm("CreateMemoryResourceNotification");
void *_imp__CreateMemoryResourceNotification = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateMemoryResourceNotification() {
load_dll_kernel32();
_imp__CreateMemoryResourceNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMemoryResourceNotification");
}
void _elfimplib_CreateMemoryResourceNotification() {
asm("leave\njmp *%0" : : "r"(_imp__CreateMemoryResourceNotification));
}


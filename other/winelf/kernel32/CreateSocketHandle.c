#include "kernel32.h"
void _elfimplib_CreateSocketHandle() asm("CreateSocketHandle");
void *_imp__CreateSocketHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateSocketHandle() {
load_dll_kernel32();
_imp__CreateSocketHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateSocketHandle");
}
void _elfimplib_CreateSocketHandle() {
asm("leave\njmp *%0" : : "r"(_imp__CreateSocketHandle));
}


#include "kernel32.h"
void _elfimplib_CreateActCtxA() asm("CreateActCtxA");
void *_imp__CreateActCtxA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateActCtxA() {
load_dll_kernel32();
_imp__CreateActCtxA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateActCtxA");
}
void _elfimplib_CreateActCtxA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateActCtxA));
}


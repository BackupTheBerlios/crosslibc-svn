#include "kernel32.h"
void _elfimplib_CreateActCtxW() asm("CreateActCtxW");
void *_imp__CreateActCtxW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateActCtxW() {
load_dll_kernel32();
_imp__CreateActCtxW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateActCtxW");
}
void _elfimplib_CreateActCtxW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateActCtxW));
}


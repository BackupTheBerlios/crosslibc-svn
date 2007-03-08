#include "kernel32.h"
void _elfimplib_AddRefActCtx() asm("AddRefActCtx");
void *_imp__AddRefActCtx = NULL;
__attribute__((constructor)) void _elfimplib_init_AddRefActCtx() {
load_dll_kernel32();
_imp__AddRefActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "AddRefActCtx");
}
void _elfimplib_AddRefActCtx() {
asm("leave\njmp *%0" : : "r"(_imp__AddRefActCtx));
}


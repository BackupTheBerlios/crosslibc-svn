#include "kernel32.h"
void _elfimplib_ReleaseActCtx() asm("ReleaseActCtx");
void *_imp__ReleaseActCtx = NULL;
__attribute__((constructor)) void _elfimplib_init_ReleaseActCtx() {
load_dll_kernel32();
_imp__ReleaseActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "ReleaseActCtx");
}
void _elfimplib_ReleaseActCtx() {
asm("leave\njmp *%0" : : "r"(_imp__ReleaseActCtx));
}


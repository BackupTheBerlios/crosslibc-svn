#include "kernel32.h"
void _elfimplib_GetCurrentActCtx() asm("GetCurrentActCtx");
void *_imp__GetCurrentActCtx = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentActCtx() {
load_dll_kernel32();
_imp__GetCurrentActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentActCtx");
}
void _elfimplib_GetCurrentActCtx() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentActCtx));
}


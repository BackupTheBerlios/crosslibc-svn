#include "kernel32.h"
void _elfimplib_ActivateActCtx() asm("ActivateActCtx");
void *_imp__ActivateActCtx = NULL;
__attribute__((constructor)) void _elfimplib_init_ActivateActCtx() {
load_dll_kernel32();
_imp__ActivateActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "ActivateActCtx");
}
void _elfimplib_ActivateActCtx() {
asm("leave\njmp *%0" : : "r"(_imp__ActivateActCtx));
}


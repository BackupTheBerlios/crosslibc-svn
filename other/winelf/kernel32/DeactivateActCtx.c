#include "kernel32.h"
void _elfimplib_DeactivateActCtx() asm("DeactivateActCtx");
void *_imp__DeactivateActCtx = NULL;
__attribute__((constructor)) void _elfimplib_init_DeactivateActCtx() {
load_dll_kernel32();
_imp__DeactivateActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "DeactivateActCtx");
}
void _elfimplib_DeactivateActCtx() {
asm("leave\njmp *%0" : : "r"(_imp__DeactivateActCtx));
}


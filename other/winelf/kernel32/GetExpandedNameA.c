#include "kernel32.h"
void _elfimplib_GetExpandedNameA() asm("GetExpandedNameA");
void *_imp__GetExpandedNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetExpandedNameA() {
load_dll_kernel32();
_imp__GetExpandedNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExpandedNameA");
}
void _elfimplib_GetExpandedNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetExpandedNameA));
}


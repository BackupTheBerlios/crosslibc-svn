#include "kernel32.h"
void _elfimplib_GetExpandedNameW() asm("GetExpandedNameW");
void *_imp__GetExpandedNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetExpandedNameW() {
load_dll_kernel32();
_imp__GetExpandedNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExpandedNameW");
}
void _elfimplib_GetExpandedNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetExpandedNameW));
}


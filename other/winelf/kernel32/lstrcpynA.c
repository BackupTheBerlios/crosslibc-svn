#include "kernel32.h"
void _elfimplib_lstrcpynA() asm("lstrcpynA");
void *_imp__lstrcpynA = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcpynA() {
load_dll_kernel32();
_imp__lstrcpynA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpynA");
}
void _elfimplib_lstrcpynA() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcpynA));
}


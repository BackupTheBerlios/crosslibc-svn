#include "kernel32.h"
void _elfimplib_lstrcpyA() asm("lstrcpyA");
void *_imp__lstrcpyA = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcpyA() {
load_dll_kernel32();
_imp__lstrcpyA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpyA");
}
void _elfimplib_lstrcpyA() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcpyA));
}


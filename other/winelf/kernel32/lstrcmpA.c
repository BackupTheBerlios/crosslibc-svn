#include "kernel32.h"
void _elfimplib_lstrcmpA() asm("lstrcmpA");
void *_imp__lstrcmpA = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcmpA() {
load_dll_kernel32();
_imp__lstrcmpA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpA");
}
void _elfimplib_lstrcmpA() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcmpA));
}


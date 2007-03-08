#include "kernel32.h"
void _elfimplib_lstrcatA() asm("lstrcatA");
void *_imp__lstrcatA = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcatA() {
load_dll_kernel32();
_imp__lstrcatA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcatA");
}
void _elfimplib_lstrcatA() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcatA));
}


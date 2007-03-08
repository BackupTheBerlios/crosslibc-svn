#include "kernel32.h"
void _elfimplib_GlobalAddAtomA() asm("GlobalAddAtomA");
void *_imp__GlobalAddAtomA = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalAddAtomA() {
load_dll_kernel32();
_imp__GlobalAddAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalAddAtomA");
}
void _elfimplib_GlobalAddAtomA() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalAddAtomA));
}


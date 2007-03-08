#include "kernel32.h"
void _elfimplib_AddAtomA() asm("AddAtomA");
void *_imp__AddAtomA = NULL;
__attribute__((constructor)) void _elfimplib_init_AddAtomA() {
load_dll_kernel32();
_imp__AddAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "AddAtomA");
}
void _elfimplib_AddAtomA() {
asm("leave\njmp *%0" : : "r"(_imp__AddAtomA));
}


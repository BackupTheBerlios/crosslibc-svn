#include "kernel32.h"
void _elfimplib_FindAtomA() asm("FindAtomA");
void *_imp__FindAtomA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindAtomA() {
load_dll_kernel32();
_imp__FindAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindAtomA");
}
void _elfimplib_FindAtomA() {
asm("leave\njmp *%0" : : "r"(_imp__FindAtomA));
}


#include "kernel32.h"
void _elfimplib_FindAtomW() asm("FindAtomW");
void *_imp__FindAtomW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindAtomW() {
load_dll_kernel32();
_imp__FindAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindAtomW");
}
void _elfimplib_FindAtomW() {
asm("leave\njmp *%0" : : "r"(_imp__FindAtomW));
}


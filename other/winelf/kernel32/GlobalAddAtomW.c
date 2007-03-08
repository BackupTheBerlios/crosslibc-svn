#include "kernel32.h"
void _elfimplib_GlobalAddAtomW() asm("GlobalAddAtomW");
void *_imp__GlobalAddAtomW = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalAddAtomW() {
load_dll_kernel32();
_imp__GlobalAddAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalAddAtomW");
}
void _elfimplib_GlobalAddAtomW() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalAddAtomW));
}


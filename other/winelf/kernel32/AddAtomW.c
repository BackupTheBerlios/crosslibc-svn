#include "kernel32.h"
void _elfimplib_AddAtomW() asm("AddAtomW");
void *_imp__AddAtomW = NULL;
__attribute__((constructor)) void _elfimplib_init_AddAtomW() {
load_dll_kernel32();
_imp__AddAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "AddAtomW");
}
void _elfimplib_AddAtomW() {
asm("leave\njmp *%0" : : "r"(_imp__AddAtomW));
}


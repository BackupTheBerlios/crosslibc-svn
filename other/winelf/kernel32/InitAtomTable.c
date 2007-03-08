#include "kernel32.h"
void _elfimplib_InitAtomTable() asm("InitAtomTable");
void *_imp__InitAtomTable = NULL;
__attribute__((constructor)) void _elfimplib_init_InitAtomTable() {
load_dll_kernel32();
_imp__InitAtomTable = (void *) _elf_GetProcAddress(_dll_kernel32, "InitAtomTable");
}
void _elfimplib_InitAtomTable() {
asm("leave\njmp *%0" : : "r"(_imp__InitAtomTable));
}


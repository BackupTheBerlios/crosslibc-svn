#include "kernel32.h"
void _elfimplib_GlobalFindAtomW() asm("GlobalFindAtomW");
void *_imp__GlobalFindAtomW = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalFindAtomW() {
load_dll_kernel32();
_imp__GlobalFindAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFindAtomW");
}
void _elfimplib_GlobalFindAtomW() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalFindAtomW));
}


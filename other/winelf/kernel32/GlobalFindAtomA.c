#include "kernel32.h"
void _elfimplib_GlobalFindAtomA() asm("GlobalFindAtomA");
void *_imp__GlobalFindAtomA = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalFindAtomA() {
load_dll_kernel32();
_imp__GlobalFindAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFindAtomA");
}
void _elfimplib_GlobalFindAtomA() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalFindAtomA));
}


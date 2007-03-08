#include "kernel32.h"
void _elfimplib_GlobalDeleteAtom() asm("GlobalDeleteAtom");
void *_imp__GlobalDeleteAtom = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalDeleteAtom() {
load_dll_kernel32();
_imp__GlobalDeleteAtom = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalDeleteAtom");
}
void _elfimplib_GlobalDeleteAtom() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalDeleteAtom));
}


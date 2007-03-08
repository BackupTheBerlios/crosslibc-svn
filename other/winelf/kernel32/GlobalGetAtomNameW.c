#include "kernel32.h"
void _elfimplib_GlobalGetAtomNameW() asm("GlobalGetAtomNameW");
void *_imp__GlobalGetAtomNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalGetAtomNameW() {
load_dll_kernel32();
_imp__GlobalGetAtomNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalGetAtomNameW");
}
void _elfimplib_GlobalGetAtomNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalGetAtomNameW));
}


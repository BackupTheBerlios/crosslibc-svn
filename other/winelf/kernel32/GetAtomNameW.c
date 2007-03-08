#include "kernel32.h"
void _elfimplib_GetAtomNameW() asm("GetAtomNameW");
void *_imp__GetAtomNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetAtomNameW() {
load_dll_kernel32();
_imp__GetAtomNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetAtomNameW");
}
void _elfimplib_GetAtomNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetAtomNameW));
}


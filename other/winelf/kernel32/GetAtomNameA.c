#include "kernel32.h"
void _elfimplib_GetAtomNameA() asm("GetAtomNameA");
void *_imp__GetAtomNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetAtomNameA() {
load_dll_kernel32();
_imp__GetAtomNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetAtomNameA");
}
void _elfimplib_GetAtomNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetAtomNameA));
}

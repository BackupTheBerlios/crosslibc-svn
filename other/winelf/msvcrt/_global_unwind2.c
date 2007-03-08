#include "msvcrt.h"
void _elfimplib__global_unwind2() asm("global_unwind2");
void *_imp___global_unwind2 = NULL;
__attribute__((constructor)) void _elfimplib_init__global_unwind2() {
load_dll_msvcrt();
_imp___global_unwind2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_global_unwind2");
}
void _elfimplib__global_unwind2() {
asm("leave\njmp *%0" : : "r"(_imp___global_unwind2));
}


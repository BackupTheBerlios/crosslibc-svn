#include "kernel32.h"
void _elfimplib_BuildCommDCBA() asm("BuildCommDCBA");
void *_imp__BuildCommDCBA = NULL;
__attribute__((constructor)) void _elfimplib_init_BuildCommDCBA() {
load_dll_kernel32();
_imp__BuildCommDCBA = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBA");
}
void _elfimplib_BuildCommDCBA() {
asm("leave\njmp *%0" : : "r"(_imp__BuildCommDCBA));
}


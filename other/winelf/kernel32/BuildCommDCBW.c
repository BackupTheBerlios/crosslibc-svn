#include "kernel32.h"
void _elfimplib_BuildCommDCBW() asm("BuildCommDCBW");
void *_imp__BuildCommDCBW = NULL;
__attribute__((constructor)) void _elfimplib_init_BuildCommDCBW() {
load_dll_kernel32();
_imp__BuildCommDCBW = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBW");
}
void _elfimplib_BuildCommDCBW() {
asm("leave\njmp *%0" : : "r"(_imp__BuildCommDCBW));
}


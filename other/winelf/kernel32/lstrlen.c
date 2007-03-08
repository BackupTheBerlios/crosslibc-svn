#include "kernel32.h"
void _elfimplib_lstrlen() asm("lstrlen");
void *_imp__lstrlen = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrlen() {
load_dll_kernel32();
_imp__lstrlen = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrlen");
}
void _elfimplib_lstrlen() {
asm("leave\njmp *%0" : : "r"(_imp__lstrlen));
}


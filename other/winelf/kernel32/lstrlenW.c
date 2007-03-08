#include "kernel32.h"
void _elfimplib_lstrlenW() asm("lstrlenW");
void *_imp__lstrlenW = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrlenW() {
load_dll_kernel32();
_imp__lstrlenW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrlenW");
}
void _elfimplib_lstrlenW() {
asm("leave\njmp *%0" : : "r"(_imp__lstrlenW));
}


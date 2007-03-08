#include "kernel32.h"
void _elfimplib_lstrcat() asm("lstrcat");
void *_imp__lstrcat = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcat() {
load_dll_kernel32();
_imp__lstrcat = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcat");
}
void _elfimplib_lstrcat() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcat));
}


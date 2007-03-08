#include "kernel32.h"
void _elfimplib_lstrlenA() asm("lstrlenA");
void *_imp__lstrlenA = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrlenA() {
load_dll_kernel32();
_imp__lstrlenA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrlenA");
}
void _elfimplib_lstrlenA() {
asm("leave\njmp *%0" : : "r"(_imp__lstrlenA));
}


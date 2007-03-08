#include "kernel32.h"
void _elfimplib_SearchPathA() asm("SearchPathA");
void *_imp__SearchPathA = NULL;
__attribute__((constructor)) void _elfimplib_init_SearchPathA() {
load_dll_kernel32();
_imp__SearchPathA = (void *) _elf_GetProcAddress(_dll_kernel32, "SearchPathA");
}
void _elfimplib_SearchPathA() {
asm("leave\njmp *%0" : : "r"(_imp__SearchPathA));
}


#include "kernel32.h"
void _elfimplib_SearchPathW() asm("SearchPathW");
void *_imp__SearchPathW = NULL;
__attribute__((constructor)) void _elfimplib_init_SearchPathW() {
load_dll_kernel32();
_imp__SearchPathW = (void *) _elf_GetProcAddress(_dll_kernel32, "SearchPathW");
}
void _elfimplib_SearchPathW() {
asm("leave\njmp *%0" : : "r"(_imp__SearchPathW));
}


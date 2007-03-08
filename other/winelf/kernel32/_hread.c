#include "kernel32.h"
void _elfimplib__hread() asm("hread");
void *_imp___hread = NULL;
__attribute__((constructor)) void _elfimplib_init__hread() {
load_dll_kernel32();
_imp___hread = (void *) _elf_GetProcAddress(_dll_kernel32, "_hread");
}
void _elfimplib__hread() {
asm("leave\njmp *%0" : : "r"(_imp___hread));
}


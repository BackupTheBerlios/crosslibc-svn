#include "kernel32.h"
void _elfimplib__hwrite() asm("hwrite");
void *_imp___hwrite = NULL;
__attribute__((constructor)) void _elfimplib_init__hwrite() {
load_dll_kernel32();
_imp___hwrite = (void *) _elf_GetProcAddress(_dll_kernel32, "_hwrite");
}
void _elfimplib__hwrite() {
asm("leave\njmp *%0" : : "r"(_imp___hwrite));
}


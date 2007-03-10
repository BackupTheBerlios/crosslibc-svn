#include "msvcrt.h"
void _elfimplib__CIsinh() asm("CIsinh");
void *_imp___CIsinh = NULL;
__attribute__((constructor)) void _elfimplib_init__CIsinh() {
load_dll_msvcrt();
_imp___CIsinh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIsinh");
}
void _elfimplib__CIsinh() {
asm("leave\njmp *%0" : : "r"(_imp___CIsinh));
}

void _elfimplibmang__CIsinh() asm("_CIsinh");
void _elfimplibmang__CIsinh() {
asm("leave\njmp *%0" : : "r"(_imp___CIsinh));
}


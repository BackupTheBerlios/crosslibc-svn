#include "msvcrt.h"
void _elfimplib__CItanh() asm("CItanh");
void *_imp___CItanh = NULL;
__attribute__((constructor)) void _elfimplib_init__CItanh() {
load_dll_msvcrt();
_imp___CItanh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CItanh");
}
void _elfimplib__CItanh() {
asm("leave\njmp *%0" : : "r"(_imp___CItanh));
}


#include "msvcrt.h"
void _elfimplib_tanh() asm("tanh");
void *_imp__tanh = NULL;
__attribute__((constructor)) void _elfimplib_init_tanh() {
load_dll_msvcrt();
_imp__tanh = (void *) _elf_GetProcAddress(_dll_msvcrt, "tanh");
}
void _elfimplib_tanh() {
asm("leave\njmp *%0" : : "r"(_imp__tanh));
}


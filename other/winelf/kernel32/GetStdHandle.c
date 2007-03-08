#include "kernel32.h"
void _elfimplib_GetStdHandle() asm("GetStdHandle");
void *_imp__GetStdHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_GetStdHandle() {
load_dll_kernel32();
_imp__GetStdHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStdHandle");
}
void _elfimplib_GetStdHandle() {
asm("leave\njmp *%0" : : "r"(_imp__GetStdHandle));
}


#include "kernel32.h"
void _elfimplib_TlsFree() asm("TlsFree");
void *_imp__TlsFree = NULL;
__attribute__((constructor)) void _elfimplib_init_TlsFree() {
load_dll_kernel32();
_imp__TlsFree = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsFree");
}
void _elfimplib_TlsFree() {
asm("leave\njmp *%0" : : "r"(_imp__TlsFree));
}


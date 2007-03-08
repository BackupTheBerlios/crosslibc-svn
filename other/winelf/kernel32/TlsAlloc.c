#include "kernel32.h"
void _elfimplib_TlsAlloc() asm("TlsAlloc");
void *_imp__TlsAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_TlsAlloc() {
load_dll_kernel32();
_imp__TlsAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsAlloc");
}
void _elfimplib_TlsAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__TlsAlloc));
}


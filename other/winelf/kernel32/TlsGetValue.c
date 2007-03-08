#include "kernel32.h"
void _elfimplib_TlsGetValue() asm("TlsGetValue");
void *_imp__TlsGetValue = NULL;
__attribute__((constructor)) void _elfimplib_init_TlsGetValue() {
load_dll_kernel32();
_imp__TlsGetValue = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsGetValue");
}
void _elfimplib_TlsGetValue() {
asm("leave\njmp *%0" : : "r"(_imp__TlsGetValue));
}


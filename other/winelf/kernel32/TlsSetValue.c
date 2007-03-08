#include "kernel32.h"
void _elfimplib_TlsSetValue() asm("TlsSetValue");
void *_imp__TlsSetValue = NULL;
__attribute__((constructor)) void _elfimplib_init_TlsSetValue() {
load_dll_kernel32();
_imp__TlsSetValue = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsSetValue");
}
void _elfimplib_TlsSetValue() {
asm("leave\njmp *%0" : : "r"(_imp__TlsSetValue));
}


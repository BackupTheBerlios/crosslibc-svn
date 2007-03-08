#include "kernel32.h"
void _elfimplib_CreateNlsSecurityDescriptor() asm("CreateNlsSecurityDescriptor");
void *_imp__CreateNlsSecurityDescriptor = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateNlsSecurityDescriptor() {
load_dll_kernel32();
_imp__CreateNlsSecurityDescriptor = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateNlsSecurityDescriptor");
}
void _elfimplib_CreateNlsSecurityDescriptor() {
asm("leave\njmp *%0" : : "r"(_imp__CreateNlsSecurityDescriptor));
}


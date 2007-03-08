#include "kernel32.h"
void _elfimplib_CreateProcessW() asm("CreateProcessW");
void *_imp__CreateProcessW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateProcessW() {
load_dll_kernel32();
_imp__CreateProcessW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessW");
}
void _elfimplib_CreateProcessW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateProcessW));
}


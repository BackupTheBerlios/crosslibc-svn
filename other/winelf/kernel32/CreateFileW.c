#include "kernel32.h"
void _elfimplib_CreateFileW() asm("CreateFileW");
void *_imp__CreateFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateFileW() {
load_dll_kernel32();
_imp__CreateFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileW");
}
void _elfimplib_CreateFileW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateFileW));
}


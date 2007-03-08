#include "kernel32.h"
void _elfimplib_CreateFileMappingW() asm("CreateFileMappingW");
void *_imp__CreateFileMappingW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateFileMappingW() {
load_dll_kernel32();
_imp__CreateFileMappingW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileMappingW");
}
void _elfimplib_CreateFileMappingW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateFileMappingW));
}


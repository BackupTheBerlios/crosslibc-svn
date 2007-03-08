#include "kernel32.h"
void _elfimplib_CreateFileMappingA() asm("CreateFileMappingA");
void *_imp__CreateFileMappingA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateFileMappingA() {
load_dll_kernel32();
_imp__CreateFileMappingA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileMappingA");
}
void _elfimplib_CreateFileMappingA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateFileMappingA));
}


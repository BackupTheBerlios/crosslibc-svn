#include "kernel32.h"
void _elfimplib_OpenFileMappingA() asm("OpenFileMappingA");
void *_imp__OpenFileMappingA = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenFileMappingA() {
load_dll_kernel32();
_imp__OpenFileMappingA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenFileMappingA");
}
void _elfimplib_OpenFileMappingA() {
asm("leave\njmp *%0" : : "r"(_imp__OpenFileMappingA));
}


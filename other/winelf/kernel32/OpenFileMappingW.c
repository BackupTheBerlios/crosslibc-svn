#include "kernel32.h"
void _elfimplib_OpenFileMappingW() asm("OpenFileMappingW");
void *_imp__OpenFileMappingW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenFileMappingW() {
load_dll_kernel32();
_imp__OpenFileMappingW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenFileMappingW");
}
void _elfimplib_OpenFileMappingW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenFileMappingW));
}


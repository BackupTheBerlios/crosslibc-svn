#include "kernel32.h"
void _elfimplib_WriteFileGather() asm("WriteFileGather");
void *_imp__WriteFileGather = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteFileGather() {
load_dll_kernel32();
_imp__WriteFileGather = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteFileGather");
}
void _elfimplib_WriteFileGather() {
asm("leave\njmp *%0" : : "r"(_imp__WriteFileGather));
}


#include "kernel32.h"
void _elfimplib_SetFilePointer() asm("SetFilePointer");
void *_imp__SetFilePointer = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFilePointer() {
load_dll_kernel32();
_imp__SetFilePointer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFilePointer");
}
void _elfimplib_SetFilePointer() {
asm("leave\njmp *%0" : : "r"(_imp__SetFilePointer));
}


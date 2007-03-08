#include "kernel32.h"
void _elfimplib_GetCommMask() asm("GetCommMask");
void *_imp__GetCommMask = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCommMask() {
load_dll_kernel32();
_imp__GetCommMask = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommMask");
}
void _elfimplib_GetCommMask() {
asm("leave\njmp *%0" : : "r"(_imp__GetCommMask));
}


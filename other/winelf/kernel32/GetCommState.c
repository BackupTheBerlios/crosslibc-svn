#include "kernel32.h"
void _elfimplib_GetCommState() asm("GetCommState");
void *_imp__GetCommState = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCommState() {
load_dll_kernel32();
_imp__GetCommState = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommState");
}
void _elfimplib_GetCommState() {
asm("leave\njmp *%0" : : "r"(_imp__GetCommState));
}


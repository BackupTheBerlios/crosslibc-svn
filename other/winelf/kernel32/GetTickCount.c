#include "kernel32.h"
void _elfimplib_GetTickCount() asm("GetTickCount");
void *_imp__GetTickCount = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTickCount() {
load_dll_kernel32();
_imp__GetTickCount = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTickCount");
}
void _elfimplib_GetTickCount() {
asm("leave\njmp *%0" : : "r"(_imp__GetTickCount));
}


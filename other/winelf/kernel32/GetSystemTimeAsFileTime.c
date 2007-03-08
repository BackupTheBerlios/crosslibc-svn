#include "kernel32.h"
void _elfimplib_GetSystemTimeAsFileTime() asm("GetSystemTimeAsFileTime");
void *_imp__GetSystemTimeAsFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemTimeAsFileTime() {
load_dll_kernel32();
_imp__GetSystemTimeAsFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemTimeAsFileTime");
}
void _elfimplib_GetSystemTimeAsFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemTimeAsFileTime));
}


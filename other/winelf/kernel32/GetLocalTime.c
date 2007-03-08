#include "kernel32.h"
void _elfimplib_GetLocalTime() asm("GetLocalTime");
void *_imp__GetLocalTime = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLocalTime() {
load_dll_kernel32();
_imp__GetLocalTime = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLocalTime");
}
void _elfimplib_GetLocalTime() {
asm("leave\njmp *%0" : : "r"(_imp__GetLocalTime));
}


#include "kernel32.h"
void _elfimplib_GetProfileIntA() asm("GetProfileIntA");
void *_imp__GetProfileIntA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProfileIntA() {
load_dll_kernel32();
_imp__GetProfileIntA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileIntA");
}
void _elfimplib_GetProfileIntA() {
asm("leave\njmp *%0" : : "r"(_imp__GetProfileIntA));
}


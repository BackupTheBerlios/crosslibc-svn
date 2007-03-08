#include "kernel32.h"
void _elfimplib_GetTempPathA() asm("GetTempPathA");
void *_imp__GetTempPathA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTempPathA() {
load_dll_kernel32();
_imp__GetTempPathA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempPathA");
}
void _elfimplib_GetTempPathA() {
asm("leave\njmp *%0" : : "r"(_imp__GetTempPathA));
}


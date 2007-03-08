#include "kernel32.h"
void _elfimplib_GetStartupInfoA() asm("GetStartupInfoA");
void *_imp__GetStartupInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetStartupInfoA() {
load_dll_kernel32();
_imp__GetStartupInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStartupInfoA");
}
void _elfimplib_GetStartupInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__GetStartupInfoA));
}


#include "kernel32.h"
void _elfimplib_GetStartupInfoW() asm("GetStartupInfoW");
void *_imp__GetStartupInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetStartupInfoW() {
load_dll_kernel32();
_imp__GetStartupInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStartupInfoW");
}
void _elfimplib_GetStartupInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__GetStartupInfoW));
}


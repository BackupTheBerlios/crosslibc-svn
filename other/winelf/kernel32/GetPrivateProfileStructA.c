#include "kernel32.h"
void _elfimplib_GetPrivateProfileStructA() asm("GetPrivateProfileStructA");
void *_imp__GetPrivateProfileStructA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileStructA() {
load_dll_kernel32();
_imp__GetPrivateProfileStructA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStructA");
}
void _elfimplib_GetPrivateProfileStructA() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileStructA));
}


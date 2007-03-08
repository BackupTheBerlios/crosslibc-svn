#include "kernel32.h"
void _elfimplib_GetPrivateProfileStringA() asm("GetPrivateProfileStringA");
void *_imp__GetPrivateProfileStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileStringA() {
load_dll_kernel32();
_imp__GetPrivateProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStringA");
}
void _elfimplib_GetPrivateProfileStringA() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileStringA));
}


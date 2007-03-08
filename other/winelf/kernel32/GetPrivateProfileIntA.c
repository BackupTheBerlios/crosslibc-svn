#include "kernel32.h"
void _elfimplib_GetPrivateProfileIntA() asm("GetPrivateProfileIntA");
void *_imp__GetPrivateProfileIntA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileIntA() {
load_dll_kernel32();
_imp__GetPrivateProfileIntA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileIntA");
}
void _elfimplib_GetPrivateProfileIntA() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileIntA));
}


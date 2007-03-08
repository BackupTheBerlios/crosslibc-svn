#include "kernel32.h"
void _elfimplib_GetPrivateProfileStringW() asm("GetPrivateProfileStringW");
void *_imp__GetPrivateProfileStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileStringW() {
load_dll_kernel32();
_imp__GetPrivateProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStringW");
}
void _elfimplib_GetPrivateProfileStringW() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileStringW));
}


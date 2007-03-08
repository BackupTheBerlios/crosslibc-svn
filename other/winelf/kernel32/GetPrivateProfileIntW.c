#include "kernel32.h"
void _elfimplib_GetPrivateProfileIntW() asm("GetPrivateProfileIntW");
void *_imp__GetPrivateProfileIntW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileIntW() {
load_dll_kernel32();
_imp__GetPrivateProfileIntW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileIntW");
}
void _elfimplib_GetPrivateProfileIntW() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileIntW));
}


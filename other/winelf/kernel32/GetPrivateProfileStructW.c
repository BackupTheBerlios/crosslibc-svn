#include "kernel32.h"
void _elfimplib_GetPrivateProfileStructW() asm("GetPrivateProfileStructW");
void *_imp__GetPrivateProfileStructW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileStructW() {
load_dll_kernel32();
_imp__GetPrivateProfileStructW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStructW");
}
void _elfimplib_GetPrivateProfileStructW() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileStructW));
}


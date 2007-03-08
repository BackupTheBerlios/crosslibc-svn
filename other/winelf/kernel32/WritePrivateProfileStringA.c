#include "kernel32.h"
void _elfimplib_WritePrivateProfileStringA() asm("WritePrivateProfileStringA");
void *_imp__WritePrivateProfileStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_WritePrivateProfileStringA() {
load_dll_kernel32();
_imp__WritePrivateProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStringA");
}
void _elfimplib_WritePrivateProfileStringA() {
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileStringA));
}


#include "kernel32.h"
void _elfimplib_WritePrivateProfileStructA() asm("WritePrivateProfileStructA");
void *_imp__WritePrivateProfileStructA = NULL;
__attribute__((constructor)) void _elfimplib_init_WritePrivateProfileStructA() {
load_dll_kernel32();
_imp__WritePrivateProfileStructA = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStructA");
}
void _elfimplib_WritePrivateProfileStructA() {
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileStructA));
}


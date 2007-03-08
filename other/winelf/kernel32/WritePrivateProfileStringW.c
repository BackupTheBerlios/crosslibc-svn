#include "kernel32.h"
void _elfimplib_WritePrivateProfileStringW() asm("WritePrivateProfileStringW");
void *_imp__WritePrivateProfileStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_WritePrivateProfileStringW() {
load_dll_kernel32();
_imp__WritePrivateProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStringW");
}
void _elfimplib_WritePrivateProfileStringW() {
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileStringW));
}


#include "kernel32.h"
void _elfimplib_WritePrivateProfileStructW() asm("WritePrivateProfileStructW");
void *_imp__WritePrivateProfileStructW = NULL;
__attribute__((constructor)) void _elfimplib_init_WritePrivateProfileStructW() {
load_dll_kernel32();
_imp__WritePrivateProfileStructW = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStructW");
}
void _elfimplib_WritePrivateProfileStructW() {
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileStructW));
}


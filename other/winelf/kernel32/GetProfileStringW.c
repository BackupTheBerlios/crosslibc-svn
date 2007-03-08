#include "kernel32.h"
void _elfimplib_GetProfileStringW() asm("GetProfileStringW");
void *_imp__GetProfileStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProfileStringW() {
load_dll_kernel32();
_imp__GetProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileStringW");
}
void _elfimplib_GetProfileStringW() {
asm("leave\njmp *%0" : : "r"(_imp__GetProfileStringW));
}


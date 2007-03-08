#include "kernel32.h"
void _elfimplib_GetStringTypeExW() asm("GetStringTypeExW");
void *_imp__GetStringTypeExW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetStringTypeExW() {
load_dll_kernel32();
_imp__GetStringTypeExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeExW");
}
void _elfimplib_GetStringTypeExW() {
asm("leave\njmp *%0" : : "r"(_imp__GetStringTypeExW));
}


#include "kernel32.h"
void _elfimplib_GetVersionExW() asm("GetVersionExW");
void *_imp__GetVersionExW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVersionExW() {
load_dll_kernel32();
_imp__GetVersionExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVersionExW");
}
void _elfimplib_GetVersionExW() {
asm("leave\njmp *%0" : : "r"(_imp__GetVersionExW));
}


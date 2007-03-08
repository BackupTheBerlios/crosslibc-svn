#include "kernel32.h"
void _elfimplib_GetProfileIntW() asm("GetProfileIntW");
void *_imp__GetProfileIntW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProfileIntW() {
load_dll_kernel32();
_imp__GetProfileIntW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileIntW");
}
void _elfimplib_GetProfileIntW() {
asm("leave\njmp *%0" : : "r"(_imp__GetProfileIntW));
}


#include "kernel32.h"
void _elfimplib_GetFileSizeEx() asm("GetFileSizeEx");
void *_imp__GetFileSizeEx = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileSizeEx() {
load_dll_kernel32();
_imp__GetFileSizeEx = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileSizeEx");
}
void _elfimplib_GetFileSizeEx() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileSizeEx));
}


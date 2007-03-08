#include "kernel32.h"
void _elfimplib_GetFileType() asm("GetFileType");
void *_imp__GetFileType = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileType() {
load_dll_kernel32();
_imp__GetFileType = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileType");
}
void _elfimplib_GetFileType() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileType));
}


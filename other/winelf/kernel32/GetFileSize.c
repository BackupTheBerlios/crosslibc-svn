#include "kernel32.h"
void _elfimplib_GetFileSize() asm("GetFileSize");
void *_imp__GetFileSize = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileSize() {
load_dll_kernel32();
_imp__GetFileSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileSize");
}
void _elfimplib_GetFileSize() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileSize));
}


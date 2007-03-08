#include "kernel32.h"
void _elfimplib_GetCurrentDirectoryW() asm("GetCurrentDirectoryW");
void *_imp__GetCurrentDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentDirectoryW() {
load_dll_kernel32();
_imp__GetCurrentDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentDirectoryW");
}
void _elfimplib_GetCurrentDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentDirectoryW));
}


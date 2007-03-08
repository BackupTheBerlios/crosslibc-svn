#include "kernel32.h"
void _elfimplib_SetCurrentDirectoryW() asm("SetCurrentDirectoryW");
void *_imp__SetCurrentDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCurrentDirectoryW() {
load_dll_kernel32();
_imp__SetCurrentDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCurrentDirectoryW");
}
void _elfimplib_SetCurrentDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__SetCurrentDirectoryW));
}


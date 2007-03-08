#include "kernel32.h"
void _elfimplib_SetFileShortNameA() asm("SetFileShortNameA");
void *_imp__SetFileShortNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileShortNameA() {
load_dll_kernel32();
_imp__SetFileShortNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileShortNameA");
}
void _elfimplib_SetFileShortNameA() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileShortNameA));
}


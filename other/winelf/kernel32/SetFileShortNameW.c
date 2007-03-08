#include "kernel32.h"
void _elfimplib_SetFileShortNameW() asm("SetFileShortNameW");
void *_imp__SetFileShortNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileShortNameW() {
load_dll_kernel32();
_imp__SetFileShortNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileShortNameW");
}
void _elfimplib_SetFileShortNameW() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileShortNameW));
}


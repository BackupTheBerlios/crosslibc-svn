#include "kernel32.h"
void _elfimplib_GlobalFix() asm("GlobalFix");
void *_imp__GlobalFix = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalFix() {
load_dll_kernel32();
_imp__GlobalFix = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFix");
}
void _elfimplib_GlobalFix() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalFix));
}


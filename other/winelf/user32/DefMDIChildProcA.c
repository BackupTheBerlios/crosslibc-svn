#include "user32.h"
void _elfimplib_DefMDIChildProcA() asm("DefMDIChildProcA");
void *_imp__DefMDIChildProcA = NULL;
__attribute__((constructor)) void _elfimplib_init_DefMDIChildProcA() {
load_dll_user32();
_imp__DefMDIChildProcA = (void *) _elf_GetProcAddress(_dll_user32, "DefMDIChildProcA");
}
void _elfimplib_DefMDIChildProcA() {
asm("leave\njmp *%0" : : "r"(_imp__DefMDIChildProcA));
}


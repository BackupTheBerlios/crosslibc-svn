#include "user32.h"
void _elfimplib_DefMDIChildProcW() asm("DefMDIChildProcW");
void *_imp__DefMDIChildProcW = NULL;
__attribute__((constructor)) void _elfimplib_init_DefMDIChildProcW() {
load_dll_user32();
_imp__DefMDIChildProcW = (void *) _elf_GetProcAddress(_dll_user32, "DefMDIChildProcW");
}
void _elfimplib_DefMDIChildProcW() {
asm("leave\njmp *%0" : : "r"(_imp__DefMDIChildProcW));
}


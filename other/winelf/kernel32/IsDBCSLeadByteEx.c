#include "kernel32.h"
void _elfimplib_IsDBCSLeadByteEx() asm("IsDBCSLeadByteEx");
void *_imp__IsDBCSLeadByteEx = NULL;
__attribute__((constructor)) void _elfimplib_init_IsDBCSLeadByteEx() {
load_dll_kernel32();
_imp__IsDBCSLeadByteEx = (void *) _elf_GetProcAddress(_dll_kernel32, "IsDBCSLeadByteEx");
}
void _elfimplib_IsDBCSLeadByteEx() {
asm("leave\njmp *%0" : : "r"(_imp__IsDBCSLeadByteEx));
}


#include "kernel32.h"
void _elfimplib_IsDBCSLeadByte() asm("IsDBCSLeadByte");
void *_imp__IsDBCSLeadByte = NULL;
__attribute__((constructor)) void _elfimplib_init_IsDBCSLeadByte() {
load_dll_kernel32();
_imp__IsDBCSLeadByte = (void *) _elf_GetProcAddress(_dll_kernel32, "IsDBCSLeadByte");
}
void _elfimplib_IsDBCSLeadByte() {
asm("leave\njmp *%0" : : "r"(_imp__IsDBCSLeadByte));
}


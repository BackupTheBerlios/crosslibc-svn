#include "kernel32.h"
void _elfimplib_CheckNameLegalDOS8Dot3A() asm("CheckNameLegalDOS8Dot3A");
void *_imp__CheckNameLegalDOS8Dot3A = NULL;
__attribute__((constructor)) void _elfimplib_init_CheckNameLegalDOS8Dot3A() {
load_dll_kernel32();
_imp__CheckNameLegalDOS8Dot3A = (void *) _elf_GetProcAddress(_dll_kernel32, "CheckNameLegalDOS8Dot3A");
}
void _elfimplib_CheckNameLegalDOS8Dot3A() {
asm("leave\njmp *%0" : : "r"(_imp__CheckNameLegalDOS8Dot3A));
}


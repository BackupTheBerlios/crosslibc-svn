#include "kernel32.h"
void _elfimplib_CheckNameLegalDOS8Dot3W() asm("CheckNameLegalDOS8Dot3W");
void *_imp__CheckNameLegalDOS8Dot3W = NULL;
__attribute__((constructor)) void _elfimplib_init_CheckNameLegalDOS8Dot3W() {
load_dll_kernel32();
_imp__CheckNameLegalDOS8Dot3W = (void *) _elf_GetProcAddress(_dll_kernel32, "CheckNameLegalDOS8Dot3W");
}
void _elfimplib_CheckNameLegalDOS8Dot3W() {
asm("leave\njmp *%0" : : "r"(_imp__CheckNameLegalDOS8Dot3W));
}


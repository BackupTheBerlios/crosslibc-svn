#include "msvcrt.h"
void _elfimplib___fpecode() asm("_fpecode");
void *_imp____fpecode = NULL;
__attribute__((constructor)) void _elfimplib_init___fpecode() {
load_dll_msvcrt();
_imp____fpecode = (void *) _elf_GetProcAddress(_dll_msvcrt, "__fpecode");
}
void _elfimplib___fpecode() {
asm("leave\njmp *%0" : : "r"(_imp____fpecode));
}


#include "msvcrt.h"
void _elfimplib_iswupper() asm("iswupper");
void *_imp__iswupper = NULL;
__attribute__((constructor)) void _elfimplib_init_iswupper() {
load_dll_msvcrt();
_imp__iswupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswupper");
}
void _elfimplib_iswupper() {
asm("leave\njmp *%0" : : "r"(_imp__iswupper));
}


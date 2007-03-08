#include "msvcrt.h"
void _elfimplib_iswcntrl() asm("iswcntrl");
void *_imp__iswcntrl = NULL;
__attribute__((constructor)) void _elfimplib_init_iswcntrl() {
load_dll_msvcrt();
_imp__iswcntrl = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswcntrl");
}
void _elfimplib_iswcntrl() {
asm("leave\njmp *%0" : : "r"(_imp__iswcntrl));
}


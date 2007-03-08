#include "msvcrt.h"
void _elfimplib_iscntrl() asm("iscntrl");
void *_imp__iscntrl = NULL;
__attribute__((constructor)) void _elfimplib_init_iscntrl() {
load_dll_msvcrt();
_imp__iscntrl = (void *) _elf_GetProcAddress(_dll_msvcrt, "iscntrl");
}
void _elfimplib_iscntrl() {
asm("leave\njmp *%0" : : "r"(_imp__iscntrl));
}


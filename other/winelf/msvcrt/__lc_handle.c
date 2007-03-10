#include "msvcrt.h"
void _elfimplib___lc_handle() asm("_lc_handle");
void *_imp____lc_handle = NULL;
__attribute__((constructor)) void _elfimplib_init___lc_handle() {
load_dll_msvcrt();
_imp____lc_handle = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lc_handle");
}
void _elfimplib___lc_handle() {
asm("leave\njmp *%0" : : "r"(_imp____lc_handle));
}

void _elfimplibmang___lc_handle() asm("__lc_handle");
void _elfimplibmang___lc_handle() {
asm("leave\njmp *%0" : : "r"(_imp____lc_handle));
}


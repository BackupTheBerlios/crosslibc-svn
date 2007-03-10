#include "msvcrt.h"
void _elfimplib___lc_collate_cp() asm("_lc_collate_cp");
void *_imp____lc_collate_cp = NULL;
__attribute__((constructor)) void _elfimplib_init___lc_collate_cp() {
load_dll_msvcrt();
_imp____lc_collate_cp = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lc_collate_cp");
}
void _elfimplib___lc_collate_cp() {
asm("leave\njmp *%0" : : "r"(_imp____lc_collate_cp));
}

void _elfimplibmang___lc_collate_cp() asm("__lc_collate_cp");
void _elfimplibmang___lc_collate_cp() {
asm("leave\njmp *%0" : : "r"(_imp____lc_collate_cp));
}


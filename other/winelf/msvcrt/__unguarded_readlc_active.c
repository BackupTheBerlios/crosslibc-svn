#include "msvcrt.h"
void _elfimplib___unguarded_readlc_active() asm("_unguarded_readlc_active");
void *_imp____unguarded_readlc_active = NULL;
__attribute__((constructor)) void _elfimplib_init___unguarded_readlc_active() {
load_dll_msvcrt();
_imp____unguarded_readlc_active = (void *) _elf_GetProcAddress(_dll_msvcrt, "__unguarded_readlc_active");
}
void _elfimplib___unguarded_readlc_active() {
asm("leave\njmp *%0" : : "r"(_imp____unguarded_readlc_active));
}


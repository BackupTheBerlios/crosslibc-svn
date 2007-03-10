#include "msvcrt.h"
void _elfimplib____unguarded_readlc_active_add_func() asm("__unguarded_readlc_active_add_func");
void *_imp_____unguarded_readlc_active_add_func = NULL;
__attribute__((constructor)) void _elfimplib_init____unguarded_readlc_active_add_func() {
load_dll_msvcrt();
_imp_____unguarded_readlc_active_add_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___unguarded_readlc_active_add_func");
}
void _elfimplib____unguarded_readlc_active_add_func() {
asm("leave\njmp *%0" : : "r"(_imp_____unguarded_readlc_active_add_func));
}

void _elfimplibmang____unguarded_readlc_active_add_func() asm("___unguarded_readlc_active_add_func");
void _elfimplibmang____unguarded_readlc_active_add_func() {
asm("leave\njmp *%0" : : "r"(_imp_____unguarded_readlc_active_add_func));
}


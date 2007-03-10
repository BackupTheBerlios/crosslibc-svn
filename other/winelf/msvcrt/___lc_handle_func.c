#include "msvcrt.h"
void _elfimplib____lc_handle_func() asm("__lc_handle_func");
void *_imp_____lc_handle_func = NULL;
__attribute__((constructor)) void _elfimplib_init____lc_handle_func() {
load_dll_msvcrt();
_imp_____lc_handle_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___lc_handle_func");
}
void _elfimplib____lc_handle_func() {
asm("leave\njmp *%0" : : "r"(_imp_____lc_handle_func));
}

void _elfimplibmang____lc_handle_func() asm("___lc_handle_func");
void _elfimplibmang____lc_handle_func() {
asm("leave\njmp *%0" : : "r"(_imp_____lc_handle_func));
}


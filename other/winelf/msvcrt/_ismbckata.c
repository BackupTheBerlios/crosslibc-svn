#include "msvcrt.h"
void _elfimplib__ismbckata() asm("ismbckata");
void *_imp___ismbckata = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbckata() {
load_dll_msvcrt();
_imp___ismbckata = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbckata");
}
void _elfimplib__ismbckata() {
asm("leave\njmp *%0" : : "r"(_imp___ismbckata));
}

void _elfimplibmang__ismbckata() asm("_ismbckata");
void _elfimplibmang__ismbckata() {
asm("leave\njmp *%0" : : "r"(_imp___ismbckata));
}


#include "msvcrt.h"
void _elfimplib_is_wctype() asm("is_wctype");
void *_imp__is_wctype = NULL;
__attribute__((constructor)) void _elfimplib_init_is_wctype() {
load_dll_msvcrt();
_imp__is_wctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "is_wctype");
}
void _elfimplib_is_wctype() {
asm("leave\njmp *%0" : : "r"(_imp__is_wctype));
}


#include "msvcrt.h"
void _elfimplib_iswctype() asm("iswctype");
void *_imp__iswctype = NULL;
__attribute__((constructor)) void _elfimplib_init_iswctype() {
load_dll_msvcrt();
_imp__iswctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswctype");
}
void _elfimplib_iswctype() {
asm("leave\njmp *%0" : : "r"(_imp__iswctype));
}


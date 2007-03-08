#include "msvcrt.h"
void _elfimplib_iswxdigit() asm("iswxdigit");
void *_imp__iswxdigit = NULL;
__attribute__((constructor)) void _elfimplib_init_iswxdigit() {
load_dll_msvcrt();
_imp__iswxdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswxdigit");
}
void _elfimplib_iswxdigit() {
asm("leave\njmp *%0" : : "r"(_imp__iswxdigit));
}


#include "msvcrt.h"
void _elfimplib_iswlower() asm("iswlower");
void *_imp__iswlower = NULL;
__attribute__((constructor)) void _elfimplib_init_iswlower() {
load_dll_msvcrt();
_imp__iswlower = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswlower");
}
void _elfimplib_iswlower() {
asm("leave\njmp *%0" : : "r"(_imp__iswlower));
}


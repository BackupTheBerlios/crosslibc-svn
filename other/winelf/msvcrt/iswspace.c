#include "msvcrt.h"
void _elfimplib_iswspace() asm("iswspace");
void *_imp__iswspace = NULL;
__attribute__((constructor)) void _elfimplib_init_iswspace() {
load_dll_msvcrt();
_imp__iswspace = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswspace");
}
void _elfimplib_iswspace() {
asm("leave\njmp *%0" : : "r"(_imp__iswspace));
}


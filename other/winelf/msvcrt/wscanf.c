#include "msvcrt.h"
void _elfimplib_wscanf() asm("wscanf");
void *_imp__wscanf = NULL;
__attribute__((constructor)) void _elfimplib_init_wscanf() {
load_dll_msvcrt();
_imp__wscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "wscanf");
}
void _elfimplib_wscanf() {
asm("leave\njmp *%0" : : "r"(_imp__wscanf));
}


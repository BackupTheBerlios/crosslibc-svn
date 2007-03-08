#include "msvcrt.h"
void _elfimplib___p__amblksiz() asm("_p__amblksiz");
void *_imp____p__amblksiz = NULL;
__attribute__((constructor)) void _elfimplib_init___p__amblksiz() {
load_dll_msvcrt();
_imp____p__amblksiz = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__amblksiz");
}
void _elfimplib___p__amblksiz() {
asm("leave\njmp *%0" : : "r"(_imp____p__amblksiz));
}


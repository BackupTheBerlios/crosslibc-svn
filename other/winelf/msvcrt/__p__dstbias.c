#include "msvcrt.h"
void _elfimplib___p__dstbias() asm("_p__dstbias");
void *_imp____p__dstbias = NULL;
__attribute__((constructor)) void _elfimplib_init___p__dstbias() {
load_dll_msvcrt();
_imp____p__dstbias = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__dstbias");
}
void _elfimplib___p__dstbias() {
asm("leave\njmp *%0" : : "r"(_imp____p__dstbias));
}

void _elfimplibmang___p__dstbias() asm("__p__dstbias");
void _elfimplibmang___p__dstbias() {
asm("leave\njmp *%0" : : "r"(_imp____p__dstbias));
}


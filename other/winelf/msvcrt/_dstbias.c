#include "msvcrt.h"
void _elfimplib__dstbias() asm("dstbias");
void *_imp___dstbias = NULL;
__attribute__((constructor)) void _elfimplib_init__dstbias() {
load_dll_msvcrt();
_imp___dstbias = (void *) _elf_GetProcAddress(_dll_msvcrt, "_dstbias");
}
void _elfimplib__dstbias() {
asm("leave\njmp *%0" : : "r"(_imp___dstbias));
}

void _elfimplibmang__dstbias() asm("_dstbias");
void _elfimplibmang__dstbias() {
asm("leave\njmp *%0" : : "r"(_imp___dstbias));
}


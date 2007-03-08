#include "msvcrt.h"
void _elfimplib___p__fileinfo() asm("_p__fileinfo");
void *_imp____p__fileinfo = NULL;
__attribute__((constructor)) void _elfimplib_init___p__fileinfo() {
load_dll_msvcrt();
_imp____p__fileinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__fileinfo");
}
void _elfimplib___p__fileinfo() {
asm("leave\njmp *%0" : : "r"(_imp____p__fileinfo));
}


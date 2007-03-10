#include "msvcrt.h"
void _elfimplib___p__wpgmptr() asm("_p__wpgmptr");
void *_imp____p__wpgmptr = NULL;
__attribute__((constructor)) void _elfimplib_init___p__wpgmptr() {
load_dll_msvcrt();
_imp____p__wpgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__wpgmptr");
}
void _elfimplib___p__wpgmptr() {
asm("leave\njmp *%0" : : "r"(_imp____p__wpgmptr));
}

void _elfimplibmang___p__wpgmptr() asm("__p__wpgmptr");
void _elfimplibmang___p__wpgmptr() {
asm("leave\njmp *%0" : : "r"(_imp____p__wpgmptr));
}


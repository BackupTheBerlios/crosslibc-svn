#include "msvcrt.h"
void _elfimplib___p__fmode() asm("_p__fmode");
void *_imp____p__fmode = NULL;
__attribute__((constructor)) void _elfimplib_init___p__fmode() {
load_dll_msvcrt();
_imp____p__fmode = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__fmode");
}
void _elfimplib___p__fmode() {
asm("leave\njmp *%0" : : "r"(_imp____p__fmode));
}

void _elfimplibmang___p__fmode() asm("__p__fmode");
void _elfimplibmang___p__fmode() {
asm("leave\njmp *%0" : : "r"(_imp____p__fmode));
}


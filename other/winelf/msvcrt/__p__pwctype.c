#include "msvcrt.h"
void _elfimplib___p__pwctype() asm("_p__pwctype");
void *_imp____p__pwctype = NULL;
__attribute__((constructor)) void _elfimplib_init___p__pwctype() {
load_dll_msvcrt();
_imp____p__pwctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__pwctype");
}
void _elfimplib___p__pwctype() {
asm("leave\njmp *%0" : : "r"(_imp____p__pwctype));
}

void _elfimplibmang___p__pwctype() asm("__p__pwctype");
void _elfimplibmang___p__pwctype() {
asm("leave\njmp *%0" : : "r"(_imp____p__pwctype));
}


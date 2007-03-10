#include "msvcrt.h"
void _elfimplib__pwctype() asm("pwctype");
void *_imp___pwctype = NULL;
__attribute__((constructor)) void _elfimplib_init__pwctype() {
load_dll_msvcrt();
_imp___pwctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pwctype");
}
void _elfimplib__pwctype() {
asm("leave\njmp *%0" : : "r"(_imp___pwctype));
}

void _elfimplibmang__pwctype() asm("_pwctype");
void _elfimplibmang__pwctype() {
asm("leave\njmp *%0" : : "r"(_imp___pwctype));
}


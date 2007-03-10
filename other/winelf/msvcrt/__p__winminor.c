#include "msvcrt.h"
void _elfimplib___p__winminor() asm("_p__winminor");
void *_imp____p__winminor = NULL;
__attribute__((constructor)) void _elfimplib_init___p__winminor() {
load_dll_msvcrt();
_imp____p__winminor = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__winminor");
}
void _elfimplib___p__winminor() {
asm("leave\njmp *%0" : : "r"(_imp____p__winminor));
}

void _elfimplibmang___p__winminor() asm("__p__winminor");
void _elfimplibmang___p__winminor() {
asm("leave\njmp *%0" : : "r"(_imp____p__winminor));
}


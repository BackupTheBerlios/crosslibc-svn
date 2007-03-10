#include "msvcrt.h"
void _elfimplib___p__commode() asm("_p__commode");
void *_imp____p__commode = NULL;
__attribute__((constructor)) void _elfimplib_init___p__commode() {
load_dll_msvcrt();
_imp____p__commode = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__commode");
}
void _elfimplib___p__commode() {
asm("leave\njmp *%0" : : "r"(_imp____p__commode));
}

void _elfimplibmang___p__commode() asm("__p__commode");
void _elfimplibmang___p__commode() {
asm("leave\njmp *%0" : : "r"(_imp____p__commode));
}


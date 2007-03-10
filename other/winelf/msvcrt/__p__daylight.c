#include "msvcrt.h"
void _elfimplib___p__daylight() asm("_p__daylight");
void *_imp____p__daylight = NULL;
__attribute__((constructor)) void _elfimplib_init___p__daylight() {
load_dll_msvcrt();
_imp____p__daylight = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__daylight");
}
void _elfimplib___p__daylight() {
asm("leave\njmp *%0" : : "r"(_imp____p__daylight));
}

void _elfimplibmang___p__daylight() asm("__p__daylight");
void _elfimplibmang___p__daylight() {
asm("leave\njmp *%0" : : "r"(_imp____p__daylight));
}


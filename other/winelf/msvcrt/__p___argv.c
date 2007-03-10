#include "msvcrt.h"
void _elfimplib___p___argv() asm("_p___argv");
void *_imp____p___argv = NULL;
__attribute__((constructor)) void _elfimplib_init___p___argv() {
load_dll_msvcrt();
_imp____p___argv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___argv");
}
void _elfimplib___p___argv() {
asm("leave\njmp *%0" : : "r"(_imp____p___argv));
}

void _elfimplibmang___p___argv() asm("__p___argv");
void _elfimplibmang___p___argv() {
asm("leave\njmp *%0" : : "r"(_imp____p___argv));
}


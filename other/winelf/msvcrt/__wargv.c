#include "msvcrt.h"
void _elfimplib___wargv() asm("_wargv");
void *_imp____wargv = NULL;
__attribute__((constructor)) void _elfimplib_init___wargv() {
load_dll_msvcrt();
_imp____wargv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__wargv");
}
void _elfimplib___wargv() {
asm("leave\njmp *%0" : : "r"(_imp____wargv));
}

void _elfimplibmang___wargv() asm("__wargv");
void _elfimplibmang___wargv() {
asm("leave\njmp *%0" : : "r"(_imp____wargv));
}


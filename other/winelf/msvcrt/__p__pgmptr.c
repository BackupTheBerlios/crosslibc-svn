#include "msvcrt.h"
void _elfimplib___p__pgmptr() asm("_p__pgmptr");
void *_imp____p__pgmptr = NULL;
__attribute__((constructor)) void _elfimplib_init___p__pgmptr() {
load_dll_msvcrt();
_imp____p__pgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__pgmptr");
}
void _elfimplib___p__pgmptr() {
asm("leave\njmp *%0" : : "r"(_imp____p__pgmptr));
}

void _elfimplibmang___p__pgmptr() asm("__p__pgmptr");
void _elfimplibmang___p__pgmptr() {
asm("leave\njmp *%0" : : "r"(_imp____p__pgmptr));
}


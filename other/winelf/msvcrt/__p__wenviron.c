#include "msvcrt.h"
void _elfimplib___p__wenviron() asm("_p__wenviron");
void *_imp____p__wenviron = NULL;
__attribute__((constructor)) void _elfimplib_init___p__wenviron() {
load_dll_msvcrt();
_imp____p__wenviron = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__wenviron");
}
void _elfimplib___p__wenviron() {
asm("leave\njmp *%0" : : "r"(_imp____p__wenviron));
}

void _elfimplibmang___p__wenviron() asm("__p__wenviron");
void _elfimplibmang___p__wenviron() {
asm("leave\njmp *%0" : : "r"(_imp____p__wenviron));
}

